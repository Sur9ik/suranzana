#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
const float pi = 3.14;
class shape
{
public:
	float l;
	shape(float _l)
	{
		l = _l;
	}
	shape();
	float gets();
	float getp();
};
class circle :
	public shape {
public:
	circle(int r) : shape(r) {}
	float gets()
	{
		return pi*(l*l);
	}
	float getp()
	{
		return 2 * pi*l;
	}
};

void main()
{
	circle y(12);
	cout << "Sum=" << y.gets();
	cout << "Per=" << y.getp();
	system("pause");
}