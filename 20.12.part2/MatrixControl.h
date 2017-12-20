#pragma once
#define N 100


#include <iostream>

using namespace std;

void displayMatrix(int[][N], int, int);
void randomMatrix(int[][N], int, int, int);
void swap(int& a, int& b);
void sortByMaxElem(int matrix[][N], int n, int m);
void symmetricallDisplay(int matrix[][N], int n, int m);
void sortByAscending(int matrix[][N], int n, int m);

void displayMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < m;j++)
		{
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
}
void randomMatrix(int matrix[][N], int n, int m, int k)
{
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < m;j++)
		{
			matrix[i][j] = rand() % k - k / 2;
		}
		cout << endl;
	}
}
void swap(int& a, int& b)
{
	int c;
	c = a;
	a = b;
	b = c;
}
void sortByMaxElem(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = m - 1, k = 0; j >= 0, k <= i; j--)
		{
			if (matrix[i][j] > matrix[i][j - 1])
			{
				swap(matrix[i][j], matrix[i][j - 1]);
				k++;
			}
		}
	}
}
void sortByAscending(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j<m; j++)
		{
			if (matrix[i][j] < matrix[i][j + 1])swap(matrix[i][j], matrix[i][j + 1]);
		}
	}
}
void symmetricallDisplay(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0, k = 0; j < m, k <= i; j++)
		{
			swap(matrix[i][j], matrix[j][m - n + i]);
		}
	}
}
void sortByAscendingSumOfElements(int matrix[][N], int n, int m)
{
	int k= 0,  sum= 0;
	for (int i = 0; i < n;i++)
	{
		for (int j = 0, sum = 0;j < m; j++)
		{
			sum += matrix[i][j];
			if (sum < 0) sum *= -1;
		}
		k = sum;
	}
}
