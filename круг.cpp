#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
const float pi = 3.14;
class krug
{
public:
	int b;
	float gets()
	{
		return pi*(b*b);
	}
	float getp()
	{
		return 2 * pi*b;
	}
};
void main()
{
	krug A;
	//A.a=2;
	A.b = 12;
	cout << "S=" << A.gets();
	cout << " ";
	cout << "P=" << A.getp();
	system("pause");
}
