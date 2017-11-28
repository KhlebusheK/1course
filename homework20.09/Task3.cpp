#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Please, enter number" << endl;
	cin >> n;
	if (n == 0) cout << "zero" << endl;
	if (n == 100) cout << "hundred" << endl;
	if (n / 10)
	{
		switch (n / 10)
		{
		case 2: cout << "twenty "; break;
		case 3: cout << "thirty "; break;
		case 4: cout << "forty "; break;
		case 5: cout << "fifty "; break;
		case 6: cout << "sixty "; break;
		case 7: cout << "seventy "; break;
		case 8: cout << "eighty "; break;
		case 9: cout << "ninety "; break;
		}

		switch (n % 10)
		{
		case 1: cout << "one" << endl; break;
		case 2: cout << "two" << endl; break;
		case 3: cout << "three" << endl; break;
		case 4: cout << "four" << endl; break;
		case 5: cout << "five" << endl; break;
		case 6: cout << "six" << endl; break;
		case 7: cout << "seven" << endl; break;
		case 8: cout << "eight" << endl; break;
		case 9: cout << "nine" << endl; break;
		}
	}
	else
		switch (n)
		{
		case 1: cout << "one" << endl; break;
		case 2: cout << "two" << endl; break;
		case 3: cout << "three" << endl; break;
		case 4: cout << "four" << endl; break;
		case 5: cout << "five" << endl; break;
		case 6: cout << "six" << endl; break;
		case 7: cout << "seven" << endl; break;
		case 8: cout << "eight" << endl; break;
		case 9: cout << "nine" << endl; break;
		}
	system("pause");
}