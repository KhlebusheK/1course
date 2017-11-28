/*#include <iostream>

using namespace std;

int numberOfDigits(long long int n);
long long int inverseNumber(long long int x);
long long int directNumber(long long int x);
bool isPolindrome(long long int a, long long int b);

int main()
{
	long long int n;

	cout << "Enter integer decimal number" << endl;
	cin >> n;
	long long int a = directNumber(n);
	long long int b = inverseNumber(n);
	if (isPolindrome(a, b))
	{
		cout << "Is polindrom" << endl;
	}
	cout << "Is not polindrom" << endl;
	system("pause");
}
int numberOfDigits(long long int n)
{
	int d = 0;

	for (int i = 0; double(n)/10 >= 0.1; i++)
	{
		d++;
	}
	return d;
}

long long int inverseNumber(long long int x)
{
	long long inverse = 0;
	int rest = 0;
	int d = numberOfDigits(x);

	if (d % 2)
	{
		for (int i=0; i<= d / 2 + 1; i++)
		{
			rest = x % 10;
			inverse = inverse * 10 + rest;
			x /= 10;
		}
	}
	else
		for (int i = 0; i <= d / 2 ; i++)
		{
			rest = x % 10;
			inverse = inverse * 10 + rest;
			x /= 10;
		}

	return inverse;
}

long long int directNumber(long long int x)
{
	long long a = 0;
	int d = numberOfDigits(x);
	a = x / pow(10, d / 2);
	return a;
}

bool isPolindrome(long long int a, long long int b)
{
	if (a == b)
		return 1;

	else return 0;
}*/