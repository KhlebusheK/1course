/*#include <iostream>

using namespace std;

void typeOfNumber(int less, int more, int equal);
void counter(long long int n, int& less, int& more, int& equal);

int main()
{
	long long int n;

	cout << "Enter integer decimal number" << endl;
	cin >> n;

	int less = 0, more = 0, equal = 0;

	counter(n, less, more, equal);
	typeOfNumber(less, more, equal);

	system("pause");
}
void typeOfNumber(int less, int more, int equal)
{
	if (less == 0 && more > 0 && equal == 0)
		cout << "strictly decreasing" << endl;
	if (less == 0 && more > 0 && equal > 0)
		cout << "not increasing" << endl;
	if (less > 0 && more == 0 && equal == 0)
		cout << "strictly increasing" << endl;
	if (less > 0 && more == 0 && equal > 0)
		cout << "not decreasing" << endl;
	if (less > 0 && more > 0 && equal > 0)
		cout << "unordered" << endl;
	if (less == 0 && more == 0 && equal > 0)
		cout << "monotone" << endl;
}
void counter(long long int n, int& less, int& more, int& equal)
{
	for (int i = 0; (double)n/ 10 >= 0.1; i++)
	{
		if (n % 10 < (n % 100) / 10)
			less++;
		if (n % 10 == (n % 100) / 10)
			equal++;
		if (n % 10 > (n % 100) / 10)
			more++;
		n /= 10;
	}
}*/