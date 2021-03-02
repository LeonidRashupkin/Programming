#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Введите время первой встречи в виде h:m\n";
	double h1, m1, h2, m2;
	char c;
	cin >> h1 >> c >> m1;
	while (m1 > 59) {
		m1 = m1 - 60;
		h1++;
	}
	if (m1 < 0 || h1 < 0)
		cout << "Время не может быть отрицательным";
	if (h1 > 24)
		cout << "В сутках 24 часа!";
	cout << "Ведите время второй встречи в виде h:m\n";
	cin >> h2 >> c >> m2;
	while (m2 > 59) {
		m2 = m2 - 60;
		h2++;
	}
	if (m2 < 0 || h2 < 0)
		cout << "Время не может быть отрицательным";
	else if (h2 > 24)
		cout << "В сутках 24 часа!";
	else if (h1 == h2 && m1 == m2)
		cout << "Встреча состоится";
	else if (h1 == h2 && ((m1 - m2) > 15 || (m2 - m1) > 15))
		cout << "Встреча не состоится";
	else if (h1 == h2 && ((m1 - m2) <= 15 || (m2 - m1) <= 15))
		cout << "Встреча состоится";
	else if ((h1 - h2) > 1 || (h2 - h1) > 1)
		cout << "Встреча не состоится";
	else if (h1 - h2 == 1 || h2 - h1 == 1) {
		if (h1 > h2) {
			if (m2 - 60 - m1 < 15)
				cout << "Встреча состоится";
			else
				cout << "Встреча не состоится";
		}
		else if (h2 > h1) {
			if (m1 - 60 - m2 < 15)
				cout << "Встреча состоится";
			else
				cout << "Встреча не состоится";
		}
	}
}