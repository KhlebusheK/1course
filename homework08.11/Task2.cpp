#include <iostream>

using namespace std;

void enterArray(int array[], int n);
bool nonDecreasing(int array[], int n);
int counter(int array[], int n, int p);
void trueFalse (int array[], int n, bool m);

int main()
{
	int array [] = { 0 }, n;
	cout << " Number of elements = ";
	cin >> n;
	enterArray(array, n);
	bool m;
	trueFalse (array, n, m);
	system("pause");
}
void enterArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << (i + 1) << "]=";
		cin >> array[i];
	}
}

int counter(int array[], int n, int p)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] < p)
			k++;
	}
	return (k);
}
void trueFalse ( int array [], int n, bool m)
{
	m = nonDecreasing(array, n);
		if (m)
		{
			int p;
			cout << " Enter a certain number ";
			cin >> p;
			cout << counter(array, n, p) << endl;
		}
		else
			cout << "Try again";
}
bool nonDecreasing(int array[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
		if (array[i] <= array[i + 1])
			return true;
	return false;
}
