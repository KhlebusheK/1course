#include <iostream>
using namespace std;
int transl(int n);
char symbol(int k);
int exchange(int k);
int counter(int p, int n);


int main()
{
	int n;
	cout << "Enter number";
	cin >> n;
	int m;
	cout << "enter symbol/digit";
	cin >> m;
	cout << counter(n, m);
	system("pause");
}

int counter(int m, int n)
{
	int  p = transl(n), s=0;
	if ((p % 10) == m)
		s++;
	return (s);
}
int transl(int n)
{
	int k = 0, s = 0, i=0;
	for (;  n > 16; i++)
	{
		k = (n % 16)* pow(10, i);
		n /= 16;
		s += k;
		if (k % 100 == 2)
		{
			k = (n % 16) * pow(10, i++);
			s += k;
			exchange(k);

		}
	}
	if (k % 100 == 2)
	{
		k = n * pow (10, i++);
		s += k;
		exchange(k);
		
	}
	k = n * pow(10,i);
	s += k;
	return (s);
}
int exchange(int k)
{
	switch (k)
	{
	case 10:
		k = symbol('A');
		break;
	case 11:
		k = symbol('B');
		break;
	case 12:
		k = symbol('C');
		break;
	case 13:
		k = symbol('D');
		break;
	case 14:
		k = symbol('E');
		break;
	case 15:
		k = symbol('F');
		break;
	}
	return (k);
}
int symbol(char k)
{
	k = k;
	return (k);
}