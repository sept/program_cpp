/*运算符 重载*/
#include <iostream>
using namespace std;

class CComplex
{
public:
    CComplex(double r = 0, double i = 0):img(i), real(r)
    {}
    void print()
    {
        cout<<"real = "<<real<<endl;
        cout<<"img = "<<img<<endl;
    }
    CComplex operator+(CComplex &);
    /*除了包含引用的参数外因为本身含有this指针，
    故可以直接调用类私有成员 
    不用通过对象找到该成员（作用域在类中)*/
    CComplex operator+(double);
    friend CComplex operator+(double, CComplex &);  //友元函数，外部函数 故没有含this指针
private:
    double img;
    double real;
};

CComplex CComplex::operator+(CComplex &p)
{
    CComplex tmp;

    tmp.real = p.real+real;
    tmp.img = p.img+img;

    return tmp;
}

CComplex CComplex::operator+(double r)
{
    CComplex tmp;

    tmp.real = real;
    tmp.img = img + r;

    return tmp;
}

CComplex operator+(double r, CComplex &s)
{
    CComplex tmp;

    tmp.real = s.real;
    tmp.img = s.img + r;

    return tmp;
}

int main(void)
{
    CComplex t1(12,21), t2(34, 43), t3;

    t3 = t1 + t2;
    t3.print();

    t3 = t1 + 12.2;
    t3.print();

    t3 = 12.2 + t1;
    t3.print();

    return 0;
}
