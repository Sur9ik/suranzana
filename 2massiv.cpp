#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float a[11], s;
	int sr, n, max;
	cin >> n;
	s = 0;
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i<n; i++)
	{
		s = s + a[i];
	}
	s = 0;
	for (int i = 0; i<n; i++)
	{
		s = s + a[i];
		//sr=s/n;
	}
	sr= s / n;
	max = a[0];
	for (int i = 0; i<n; i++)
	{
		if (max<a[i])
		{
			max = a[i];
		}
	}

	cout << s;
	cout << " ";
	cout << sr;
	cout << " ";
	cout << "max" << max;
	system("pause");
}