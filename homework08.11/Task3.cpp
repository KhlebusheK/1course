/*#include <iostream>
using namespace std;
void enterArray(int array[], int n);
void typeOfNumber(int less, int more, int equal);
void counter(int array[], int n, int& less, int& more, int& equal);
int main()
{
	int array[] = { 0 }, n;
	cout << " Number of elements = ";
	cin >> n;
	enterArray(array, n);
	int less = 0, more = 0, equal = 0;
	counter(array, n, less, more, equal);
	typeOfNumber(less, more, equal);
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
void typeOfNumber(int less, int more, int equal)
{
	if (less == 0 && more > 0 && equal == 0)
		cout << "strictly decreasing" << endl;
	if (less == 0 && more > 0 && equal > 0)
		cout << "not increasing" << endl;
	if (less > 0 && more == 0 && equal == 0)
		cout << "strictly increasing" << endl;
	if (less > 0 && more == 0 && equal > 0)
		cout << "not decreasing"<< endl;
	if (less > 0 && more > 0 && equal > 0)
		cout << "unordered"<< endl;
}
void counter(int array[], int n, int& less, int& more, int& equal)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] > array[i + 1])
			less++;
		if (array[i] == array[i + 1])
			equal++;
		if (array[i] < array[i + 1])
			more++;
	}
}*/