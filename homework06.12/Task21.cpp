#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
	int matrix[][N] = { 0 };
	int n = 4, m=5, k=0;

	enterMatrix(matrix, n, m);
	displayMatrix(matrix, n, m);
	
	k= max(matrix, n, m);
	cout <<k<< endl;

	system("pause");
}