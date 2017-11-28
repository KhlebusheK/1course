#include <iostream>
using namespace std;

void swap(int& a, int& b);
double moreThan(double value);
double lessThan(double value);
double between(double a, double b);
double cosTaylor(double x, double eps);
double sinTaylor(double x, double eps);
long long int inverseNumber(long long int x);
bool isPolindrome(long long int a, long long int b);
void counterOfSigns(long long int x, int& less, int& more, int& equal);
void whatSequence(long long int n, int less, int more, int equal);
void countRepeatingDigit(int i, long long int x, int digit);
long long int replacing(long long int n, int n1, int n2);
long long int deleting(long long int n, int n1);
int numberOfUnits(long long int number, int i);
int numberOfNoughts(long long int number, int i);
void convertSymbolToNumber(char symbol, int& digit);
int countDigitS(long long int number, int i, int digitS);




void swap(int& a, int& b)
{
	int c;
	c = a;
	a = b;
	b = c;
}




double moreThan(double value)
{
	double x;

	while (true)
	{
		cout << "Enter x > " << value << ": ";
		cin >> x;
		if (x > value)
			return x;
		cout << "Invalid data!" << endl;
	}
}



double lessThan(double value)
{
	double x;

	while (true)
	{
		cout << "Enter x < " << value << ": ";
		cin >> x;
		if (x < value)
			return x;
		cout << "Invalid data!" << endl;
	}
}



double between(double a, double b)
{
	double eps;

	while (true)
	{
		cout << "Enter " << a << " < eps < " << b << " : ";
		cin >> eps;
		if (eps < b && eps > a)
			return eps;
		cout << "Invalid data! Try again" << endl;
	}
}



double cosTaylor(double x, double eps)
{
	double term = x, sum = 0;

	for (int i = 1; fabs(term) > eps; i++)
	{
		sum += term;
		term = -term * x * x / (2 * i + 1) / (2 * i + 2);
	}

	return sum;
}





double sinTaylor(double x, double eps)
{
	double term = x, sum = 0;

	for (int i = 1; fabs(term) > eps; i++)
	{
		sum += term;
		term = -term * x * x / (2 * i) / (2 * i + 1);
	}

	return sum;
}



long long int inverseNumber(long long int x)
{
	long long inverse = 0;
	int rest = 0;

	while (x)                                  
	{
		rest = x % 10;
		inverse = inverse * 10 + rest;
		x /= 10;
	}

	return inverse;
}



bool isPolindrome(long long int a, long long int b)
{
	if (a == b)
		return 1;

	else return 0;
}



void counterOfSigns(long long int x, int& less, int& more, int& equal)
{
	int prev = x % 10, next = 0;
	x /= 10;

	while (x)
	{
		next = x % 10;

		if (prev == next) equal++;

		else if (prev > next) less++;

		else more++;

		prev = next;
		x /= 10;
	}
}


void whatSequence(long long int n, int less, int more, int equal)
{
	if ((less == 0) && (equal == 0))
		cout << "Number " << n << " is strictly decreasing" << endl;
	if ((less == 0) && (equal != 0))
		cout << "Number " << n << " is decreasing" << endl;
	if ((more == 0) && (equal == 0))
		cout << "Number " << n << " is strictly increasing" << endl;
	if ((more == 0) && (equal != 0))
		cout << "Number " << n << " is increasing" << endl;
	if ((more == 0) && (less == 0))
		cout << "Number " << n << " is monotonic" << endl;
	if ((more != 0) && (less != 0) && (equal != 0))
		cout << "Number " << n << " is unordered" << endl;
}



void countRepeatingDigit(int i, long long int x, int digit)
{
	int prevCur = 0, nextCur = 0, digitCur = 0, iCur = 1;
	nextCur = x % 10;

	while (x)
	{
		prevCur = nextCur;
		x = x / 10;
		nextCur = x % 10;

		if (prevCur == nextCur)
		{
			iCur++;
			digitCur = nextCur;
		}

		else

			if (iCur >= i)
			{
				i = iCur;
				digit = digitCur;
				iCur = 1;
			}
	}

	cout << "Repeating digit is " << digit << endl << "Number of repeats: " << i << endl;
}





long long int replacing(long long int n, int n1, int n2)
{
	long long newN = 0;
	int rest = 0;

	while (n)
	{
		rest = n % 10;
		if (rest == n1) rest = n2;
		newN = newN * 10 + rest;
		n /= 10;
	}

	return newN;
}



long long int deleting(long long int n, int n1)
{
	long long newN = 0;
	int rest = 0;

	while (n)
	{
		rest = n % 10;
		if (rest != n1) newN = newN * 10 + rest;
		n /= 10;
	}

	return newN;
}


int numberOfUnits(long long int number, int i)
{
	int digit;

	while (number >= 2)
	{
		digit = number % 2;
		if (digit == 1)
			i++;
		number = number / 2;
	}

	if (number == 1) i++;

	return i;
}



int numberOfNoughts(long long int number, int i)
{
	int digit;

	while (number >= 2)
	{
		digit = number % 2;
		if (digit == 0)
			i++;
		number = number / 2;
	}

	if (number == 0) i++;

	return i;
}


void convertSymbolToNumber(char symbol, int& digit)
{
	switch (symbol)
	{
	case '1': digit = 1; break;
	case '2': digit = 2; break;
	case '3': digit = 3; break;
	case '4': digit = 4; break;
	case '5': digit = 5; break;
	case '6': digit = 6; break;
	case '7': digit = 7; break;
	case '8': digit = 8; break;
	case '9': digit = 9; break;
	case 'A': digit = 10; break;
	case 'B': digit = 11; break;
	case 'C': digit = 12; break;
	case 'D': digit = 13; break;
	case 'E': digit = 14; break;
	case 'F': digit = 15; break;
	}
}


int countDigitS(long long int number, int i, int digitS)
{
	int digit;

	while (number)
	{
		digit = number % 16;
		if (digit == digitS)
			i = i + 1;
		number = number / 16;
	}

	return i;
}
