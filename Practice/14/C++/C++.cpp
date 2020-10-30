#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	long int a, b, n;
	cout << "Введите число : ";
	cin >> n;
	a = 2;
	b = 0;
	while (a <= n) {
		b++;
		a = 2;
		a = pow(a, b);
	}
	if (n == 0)
	{
		cout << "0";
	}
	else if (n == 1)
	{
		cout << "1";
	}
	else if (n == 2)
	{
		cout << "2";
	}
	else
	{
		cout << b;
	}
}