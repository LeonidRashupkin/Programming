#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Введите возводимое в степень число и целое число -- степень\n";
	double a, b, c;
	cin >> a >> b;
	c = a;
	if (b > 0)
		for (int i = 2; i <= b; i++)
			a = a * c;
	if (b == 0)
		a = 0;
	if (b < 0) {
		a = 1 / a;
		c = a;
		for (int i = -2; i >= b; i--)
			a = a * c;
	}
	else a == a;
	cout << a;
}