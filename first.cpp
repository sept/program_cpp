#include <iostream>

using namespace std;

struct point 
{
	int x;
	int y;
};

int main(void)
{
	point p;
	p.x = 1;
	p.y = 2;
	cout<<"p.x="<<p.x<<"\n"<<"p,y="<<p.y<<endl;

	return 0;
}
