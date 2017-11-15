/*#include <iostream>

using namespace std;

void enterArray(int array[], int n);
void displayArray(int array[], int n);
void sorting(int array[], int n);
void swap(int&a, int&b);

int main()
{
	int array[] = { 0 }, n;
	cout << " Number of elements = ";
	cin >> n;
	enterArray(array, n);
	 sorting(array,n);
	 displayArray(array, n);
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
void displayArray(int array[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

void sorting(int array[], int n)
{
	for (int k=0;  ; k++)
	{
		for (int i = 0; i < n; i++)
		{
			if (array[i] >= array[i + 1])
			{
				swap(array[i], array[i + 1]);
				array[i] = array[i + 1];
			}
			array[i] = array[i + 1];
		}
	}
}
void swap(int&a, int&b)
{
	int t = a;
	a = b;
	b = t;
}*/