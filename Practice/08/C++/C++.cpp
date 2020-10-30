#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, c;
    char ch;
    cout << "Введите первое число, символ операции (+ или - или * или /) и второе число через пробел : ";
    cin >> a >> ch >> b;
    if (ch == '*')
    {
        c = a * b;
    }
    else if (ch == '/')
    {
        c = a / b;
    }
    else if (ch == '+')
    {
        c = a + b;
    }
    else if (ch == '-')
    {
        c = a - b;
    }
    else cout << "Неправильный формат ввода";
    cout << c;
}