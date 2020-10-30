#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int v;
	cout << "Выберите формат ввода ( 1 - через координаты вершин; 2 - через длины сторон ) : ";
	cin >> v;
	int x1, x2, x3, y1, y2, y3;
	double a, b, c, p, s;
	if (v == 1)
	{
		cout << "Введите (x ; y) для A:\n";
		cin >> x1;
		cin >> y1;
		cout << "Введите (x ; y) для B :\n";
		cin >> x2;
		cin >> y2;
		cout << "Введите (x ; y) для С :\n";
		cin >> x3;
		cin >> y3;
		a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
		c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
		if ((a < b + c) and (c < b + a) and (b < c + a))
		{
			p = (a + b + c) / 2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "Площядь : " << s << endl;
		}
		else 
		{ 
			cout << "Такого треугольника нет\n"; 
		}
	}

	if (v == 2)
	{
		cout << "Введите длины сторон\n";
		cin >> a;
		cin >> b;
		cin	>> c;
		if ((a < b + c) and (c < b + a) and (b < c + a)) {
			p = (a + b + c) / 2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "Площядь : " << s << endl;
		}
		else
		{
			cout << "Такого треугольника нет";
		}
	}
}