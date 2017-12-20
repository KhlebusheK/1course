#include <iostream>
#include "MatrixControl.h"

using namespace std;

int main()
{
	int matrix[][N] = { 0 };

	int n;
	cout << "Enter number of string" << " ";
	cin >> n ; 


	int m;
	cout << "Enter number of columns" << " ";
	cin >> m;
	
	if (n >= m)cout << "Error! try again" << endl;

		int k;
		cout << "Enter any number" << " ";
		cin >> k;

		randomMatrix(matrix, n, m, k);
		displayMatrix(matrix, n, m);

		sortByMaxElem(matrix, n, m);
		displayMatrix(matrix, n, m);

		sortByAscending(matrix, n, m);
		displayMatrix(matrix, n, m);

		symmetricallDisplay(matrix, n, m);
		displayMatrix(matrix, n, m);

	system("pause");
}