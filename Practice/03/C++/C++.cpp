// Задание № 3
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	//int и int
	int a, b;
	cout << "Введите первое значение" << endl;
	cin >> a;
	cout << "Введите второе значение" << endl;
	cin >> b;
	cout << "Сумма значений равна " << a + b << endl << "Разность значений равна " << a - b << endl << "Произведение значений равно " << a * b << endl << "Частное значений равно " << a / b << endl << endl;
	//double и double
	double c;
	double d;
	cout << "Введите первое значение" << endl;
	cin >> c;
	cout << "Введите второе значение" << endl;
	cin >> d;
	cout << "Сумма значений равна " << c + d << endl << "Разность значений равна " << c - d << endl << "Произведение значений равно " << c * d << endl << "Частное значений равно " << c / d << endl << endl;
	//int и double
	int e;
	double f;
	cout << "Введите первое значение" << endl;
	cin >> e;
	cout << "Введите второе значение" << endl;
	cin >> f;
	cout << "Сумма значений равна " << e + f << endl << "Разность значений равна " << e - f << endl << "Произведение значений равно " << e * f << endl << "Частное значений равно " << e / f << endl << endl;
	//double и int
	double g;
	int h;
	cout << "Введите первое значение" << endl;
	cin >> g;
	cout << "Введите второе значение" << endl;
	cin >> h;
	cout << "Сумма значений равна " << g + h << endl << "Разность значений равна " << g - h << endl << "Произведение значений равно " << g * h << endl << "Частное значений равно " << g / h << endl << endl;
	return 0;
}