/*#include <iostream>

using namespace std;

long long int replacing(long long int n, int n1, int n2);

int main()
{
	long long n;

	cout << "Enter integer decimal number" << endl;
	cin >> n;

	int n1;

	cout << "Enter old digit"<< endl;
	cin >> n1;

	int n2;

	cout << "Enter new digit" << endl;
	cin >> n2;

	cout << "New number" << endl << replacing(n, n1, n2)<< endl;

	system("pause");
}
long long int replacing(long long int n, int n1, int n2)
{
	long long newN = 0;
	int rest = 0;

	for (int i=0; (double)n/10 >=0.1; i++ )
	{
		rest = n % 10;

		if (rest == n1)
		{
			rest = n2;
		}
		newN += rest *pow(10, i);
		n /= 10;
	}

	return newN;
}*/

