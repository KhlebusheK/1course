#include <iostream>
using namespace std;
int numberDigits(int);
int up(int);
int main()
{
	long long o;
	cout << "enter number";
	cin >> o;
	int b = up(o);
	cout << b;
	system("pause");
	
}
int numberDigits(int m)
{

	int number = m, l = 0;
	for (int i = 1; (double)number / 10 >= 0.1; i++)
		l++;
	return (l);
}
int up(int n)
{
	int number = n, y = numberDigits(n), c1 = n % 10, c2 = (n % 100) / 10;
	for (int i = 1; i >= y; i++)
	{
		
		if (c1 >= c2)
		{
			c1 = c2;
			n /= 10;
		}
		else
		{
			if (c1 <= c2)
			{
				c1 = c2;
				n /= 10;
				
				cout << "down";
			}
			
			cout << "monotone";
		}
	}
	
	cout << "up";
	return (0);
}

