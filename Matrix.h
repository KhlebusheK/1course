 #pragma once
#define N 100


#include <iostream>

using namespace std;


void enterMatrix(int[][N], int, int);
void displayMatrix(int[][N], int, int);
void randomMatrix(int[][N], int, int, int);
void generateMatrix(int[][N], int, int);
void generateMatrixA(int[][N], int);
void transposeMatrixA(int[][N], int);
void swapStrokMatrix(int matrix[][N], int n, int m);
void swap(int& a, int& b);
void sq(int matrix[][N], int n, int );
void round(int matrix[][N], int n, int);
int max(int matrix[][N], int n, int m);
void sortByMaxElem(int matrix[][N], int n, int m);
void sortByAscending(int matrix[][N], int n, int m);
void symmetricallDisplay(int matrix[][N], int n, int m);



void enterMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < m;j++)
		{
			cout << "a[" << (i + 1) << "][" << (j + 1) << "]=";
			cin >> matrix[i][j];
		}
	}
}

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
void generateMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < m;j++)
		{
			matrix[i][j] = i+1;
		}
		cout << endl;
	}
}
void generateMatrixA(int matrix[][N], int n)
{
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j <= i;j++)
		{
			matrix[i][j] = n - i + j;
		}
	}
}
void generateMatrixB(int matrix[][N], int n)
{
	int k = (n % 2) ? n / 2 +1 : n / 2;
		for (int i = 0; i < k / 2;i++)
		{
			for (int j = i; j < n - i;j++)
			{
				matrix[i][j] = 1;
			}
		}
		for (int i = k; i < n;i++)
		{
			for (int j = n-1 -i; j <= i;j++)
			{
				matrix[i][j] = 1;
			}
		}
}

void transposeMatrixA(int matrix[][N], int n)
{
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j <= i ;j++)
		{
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}
void swapStrokMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n/2;i++)
	{
		for (int j = 0; j <= i;j++)
		{
			swap(matrix[i][j], matrix[n - 1 - i][j]);
		}
	}
}
void sortBySumMatrix(int matrix[][N], int n, int m) //&&
{
	int sum[N] = { 0 };
	for (int i = 0; i < n / 2;i++)
	{
		for (int j =0; j < m;j--)
		{
			swap(matrix[i][j], matrix[n - 1 - i][j]);
		}
	}
}
void swap(int& a, int& b)
{
	int c;
	c = a;
	a = b;
	b = c;
}


	void sq(int matrix[][N], int n, int )
	{
		for (int i = 0; i < n/2;i++)
		{
			for (int j = 0; j < n/2;j++)
			{
				swap(matrix[i][j], matrix[n/2+i][n/2 +j]);
			}
		}
		for (int i = 0; i < n / 2;i++)
		{
			for (int j = n/2; j < n;j++)
			{
			swap(matrix[i][j], matrix[n/2+i][j-n/2]);
			}
		}
	}
	void round(int matrix[][N], int n, int)
	{
		for (int i = 0; i < n / 2;i++)
		{
			for (int j = 0; j < n / 2;j++)
			{
				swap(matrix[i][j], matrix[n / 2 + i][j]);
			}
		}
		for (int i = 0; i < n / 2;i++)
		{
			for (int j = n / 2; j < n;j++)
			{
				swap(matrix[i][j], matrix[n / 2 + i][j]);
			}
		}
		for (int i = 0; i < n / 2;i++)
		{
			for (int j = 0; j < n / 2;j++)
			{
				swap(matrix[i][j], matrix[n / 2 + i][n / 2 + j]);
			}
		}
	}
	void max(int matrix[][N], int n, int m, int& i, int&j)
	{
		int max = 0;
		i = 0, j = 0;
		for (; i < n;i++)
		{
			for (; j < m;j++)
			{
				if (matrix[i][j] > matrix[i][j + 1])
					max = matrix[i][j];
				max = matrix[i][j + 1];
			}
		}
		
		
	}
	int max(int matrix[][N], int n, int m)
	{
		int h=0, k=0;
		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < m; j++)
			{
				if (matrix[i][j] > matrix[i][j + 1])
					k = j;
			}

		if (matrix[i][k] > matrix[i + 1][k])
			h = i;
		}

		return matrix[h][k];
	}
	void sortByMaxElem(int matrix[][N], int n, int m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = m-1, k=0; j >= 0, k <= i; j--)
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
			for (int j=i+1; j<m; j++)
			{
				if (matrix[i][j] < matrix[i][j + 1])swap(matrix[i][j], matrix[i][j + 1]);
			}
		}
	}
	void symmetricallDisplay(int matrix[][N], int n, int m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0, k=0; j < m, k <=i; j++)
			{
				swap(matrix[i][j], matrix[j][m - n + i]);
			}
		}
	}
	
