/*#include <iostream>
using namespace std;
void enterArray(int array[], int n);
void counter(int array[], int n, int&neg, int&pos, int&zero);

int main()
{
	int array[] = { 0 }, n;
	cout << " Number of elements = ";
	cin >> n;
	enterArray(array, n);
	int pos = 0, neg = 0, zero = 0 ;
	counter(array, n, neg, pos, zero);
	cout << " positive = " << pos<< endl;
	cout << " negative = " << neg << endl;
	cout << " zero = " << zero << endl;
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
void counter (int array[], int n, int & neg, int & pos, int & zero)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] < 0)
			neg++;
		if (array[i] > 0)
			pos++;
		if (array[i] == 0)
			zero++;
	}
}*/