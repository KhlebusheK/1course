/*void displayArray(int array[], int n);
void enterArray(int array[], int n);*/
int firstMinIndex(int array[], int n);
int firstMaxIndex(int array[], int n);
void swap(int&a, int&b);
void reversArray(int array[], int n);
void generateRandomArray(int array[], int n);
void sortingDirectInclusionUpper(int a[], int n);

/*void displayArray(int array[], int n)   //вывод массива array из n-элементов
{

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}
void enterArray(int array[], int n)    // ввод с клавиатуры массива из n элементов
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << (i + 1) << "]=";
		cin >> array[i];
	}
}*/
int firstMinIndex(int array[], int n)    // функци€, возвращающа€ минимальное значение из массива
{
	int min = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[min] > array[i])
		{
			min = i;
		}
	}
	return (min);
}
int firstMaxIndex(int array[], int n)   // функци€, возвращающа€ максимальное значение из массива
{
	int max = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[max] < array[i])
		{
			max = i;
		}
	}
	return (max);
}
void swap(int&a, int&b)    // функци€, мен€юща€ два числа местами
{
	int t = a;
	a = b;
	b = t;
}
void reversArray(int array[], int n)   // функци€, мен€ет последний с первым элементом в массиве 2 с предпоследним и т.д. + swap
{
	for (int i = 0; i < n / 2; i++)
		swap(array[i], array[n - i - 1]);
}
void generateRandomArray(int array[], int n)  // функци€, где элементы массива = радомные числа
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand();
	}
}
void sortingDirectInclusionUpper(int a[], int n)
{
	for (int i = 1; i <= n - 1; i++) // метод пр€мого обмена,( сортировка во внешнем цикле)
	{
		int minpos = i - 1;
		for (int j = i; j < n; j++)
		{
			if (a[j] < a[minpos])
			{
				minpos = j;
			}
		}
		swap(a[i - 1], a[minpos]);
	}
}
