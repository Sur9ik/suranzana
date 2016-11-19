#include <iostream>
using namespace std;
int main()
{
	float A[10];
	int i, s = 0, max;
	float sr;
	cout << "Vvedite chisla:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
		s += A[i];
	}
	max = A[0];
	for (int i = 1; i < 10; i++)
		if (A[i] > max) max = A[i];
	{
	
		
	}
	cout << "Rezultat:" << s << endl <<"Maximum:" << max << endl <<"Srednee:"<< s/10  << endl;

	system("pause");

	return 0;




}
