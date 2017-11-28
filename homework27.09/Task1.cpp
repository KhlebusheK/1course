#include <iostream>

using namespace std;

double sum(int n);

int main()
{
	int n;

	cout << "Enter natural numer" << endl;;
	cin >> n;

	if (n > 0)
	cout << "Summa =" << " " << sum(n)<< endl;

	cout << "Invalid data! Try again!"<< endl;

	system("pause");
}
double sum (int n)
{
	double sum = 1.;

	for (double i = 2.;(double)i <= n; i++)
	{
		sum += 1. / i;
	}
	return sum;
}