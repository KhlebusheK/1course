/*#include <iostream>
using namespace std;
int numberDigits(int);
int palindrome(int);
int main()
{
	long long n;
	cout << "Enter number";
	cin >> n;
	cout << palindrome(n);
	system("pause");

}

int numberDigits(int m)
{

	int number = m, l = 0;
	for (int i = 1; (double)number / 10 >= 0.1; i++)
		l++;
	return (l);
}
int palindrome(int p)
{
	int x = p;
	int y = numberDigits(x);
	if (true) {
		for (int j = 1; j <= y; j++)
		{
			if ((x % 10) != (x / pow (10, y-1)))
				cout << "not palindrome";
			x %= (y - 1);
			x /= 10;
		}
		cout << " palindrome";
	}
	return (true);
}*/