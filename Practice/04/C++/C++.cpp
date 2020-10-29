// Задание № 4
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    // С использованием дополнительной переменной
    double a, b, h;
    cout << "Введите значение a\n";
    cin >> a;
    cout << "Введите значение b\n";
    cin >> b;
    h = a;
    a = b;
    b = h;
    cout << "Значение а = " << a << endl << "Значение b = " << b << endl;
    // Без использования дополнительной переменной
    double c, d;
    cout << "Введите значение c\n";
    cin >> c;
    cout << "Введите значение d\n";
    cin >> d;
    c = c + d;
    d = c - d;
    c = c - d;
    cout << "Значение c = " << c << endl << "Значение d = " << d;
    return 0;
}