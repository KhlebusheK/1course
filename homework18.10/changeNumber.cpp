/*#include <iostream>
using namespace std;
int numberDigits(int);
int changeNumber(int, int, int);
int main()
{
	int n;
	cout << "Enter number";
	cin >> n;
	int t, p;
	cout << "enter the old digit ";
	cin >> t;
	cout << "enter the new digit";
	cin >> p;
	int v = changeNumber(t, p, n);
	cout << v;
	system("pause");


}
int numberDigits(int m)
{

	int number = m, l = 0;
	for (int i = 1; (double)number / 10 >= 0.1; i++)
		l++;
	return (l);
}
int changeNumber(int x, int y, int w)
{
	for (int i = 1; i <= numberDigits(w); i++)
	{
		if ((w % 10) != y)
			break;
		x = y;
		w /= 10;
	}
	return (w);
}*/