#include <iostream>
using namespace std;
int main()
{ 
	int n;
	cout << "Enter number"<< endl;
	cin >> n;
	int p=0, t=9, s=0;
	for (int i = 1; n / 10 >= 1; i++)
	{
		if ((n % 10) < t)
			t = n % 10;
		if ((n % 10) > p)
			p = n % 10;
		n /= 10;
		s ++;
	}
	cout << " number of digits = " << s+1;
	cout <<" max = " << p;
	cout << " min =  " << t;
		system("pause");
}
