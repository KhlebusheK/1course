#include <iostream>
#include "MassivePart1.h"

using namespace std;

int main()
{
	const int N = 10;
	int array[N] = { 0 };

	int a;
	cout << "Enter any number" << " ";
	cin >> a;

	generateRandomArray(array, N,a);
	displayArray(array, N);

	cout << endl;

	order(array, N);
	displayArray(array, N);

	int y = sum(array, N);
	cout << y<< endl;

	delZero(array, N);
	displayArray(array, N);

	cout << endl;

	chekByOrder(array, N);
	displayArray(array, N);

	cout << endl;

	system("pause");
}