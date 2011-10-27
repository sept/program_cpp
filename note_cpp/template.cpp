#include <iostream>
using namespace std;

template<class T1, class T2>
T1 sum(T1 x, T2 y)
{
    return (x + y);
}

int main(void)
{
    cout<<"3+'a' = "<<sum(3, 'a')<<endl;
    cout<<"'c'+5 = "<<sum('c', 5)<<endl;
    cout<<"43+5 = "<<sum(43, 5)<<endl;

    return 0;
}
