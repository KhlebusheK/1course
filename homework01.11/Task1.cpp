/*#include <iostream>
using namespace std;
int counter(int i);
int binaryTranslation (int);
int main()
{
	int n;
	cout << "Enter number";
	cin >> n;
	cout << counter(n);
	return (0);

}
int counter(int n)
{
	int s = 0, k = binaryTranslation(n);
	for (int i = 1; (double)k / 10 > 0.1;i++)
	{
		if (k % 10)
			s++;
		k /= 10;
	}
	return (s);
}
int binaryTranslation(int n)
{
	int s = 0, i = 0;
	for (; (n / 2) > 1; i++)
	{
		int k = (n % 2) * pow(10., (double)i);
		s += k;
		n /= 2;
	}
	s+= pow(10., (double)(i + 1));
	return (s);
}*/
