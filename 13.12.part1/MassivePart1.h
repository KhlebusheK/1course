#include <iostream>

using namespace std;

void displayArray(int array[], int n);
void generateRandomArray(int array[], int n, int range);
void delZero(int array[], int n);
int firstPosIndex(int array[], int n);
int findTheLastNegIndex(int array[], int n);
int sum(int array[], int n);
void order(int array[], int n);


void generateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range - range / 2;
	}
}
void displayArray(int array[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}
void delZero(int array[], int n)
{
	int m = 0;
	for (int i = 0; i < n; i++, m++)
	{
		if (array[i] == 0)
		{

			for (; i < n; i++)
			{
				if (i == n - 1)break;
				array[m] = array[i + 1];
			}
		}
		array[m] = array[i];
	}
}

int firstPosIndex(int array[], int n)
{
	int pos = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] > 0)
		{
			pos = i;
			break;
		}
	}
	return (pos);
}
int findTheLastNegIndex(int array[], int n)
{
	int i = n - 1, neg = 0;
	for (; i >= 0; i--)
	{
		if (array[i] < 0)
		{
			neg = i + 1;
			break;
		}
	}
	return (neg);
}
int sum(int array[], int n)
{
	int i = firstPosIndex(array, n) - 1;
	int h = findTheLastNegIndex(array, n) - 1;
	int sum = 0;

	for (i; i <= h; i++)
	{
		if (!(i % 2))
		{
			if (array[i] % 2 && array[i] > 0)
				sum += array[i];
		}
	}
	return sum;
}
void order(int array[], int n)
{
	int c = firstPosIndex(array, n);

	if ((!array[c]))
		cout << "Not positive elements" << endl;
	else
		cout << "The first positive element = " << array[c] << endl;

	int b = findTheLastNegIndex(array, n);

	if ((!array[b]))
		cout << "Not negative elements" << endl;
	else
		cout << "The last negative element =" << array[b] << endl;
}
void chekByOrder(int array[], int n)
{
	int m = 0, i=0;
	for (; i < n; i++)
	{
		if (array[i] < 0)
		{
			array[m] = array[i];
			m++;
		}
	}
	for (i=0; i < n; i++, m++)
	{
		if (array[i] > 0) 
		{
			array[m+1] = array[i];
			m++;
		}
	}
}