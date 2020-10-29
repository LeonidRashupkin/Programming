#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    long double a = 1, b = 2, n;
    cout << "Введите число, факториал которого хотитенайти : ";
    cin >> n;
    while (b <= n)
    { 
        a = a * b;
        b++;
    }
    cout << "Факториал " << n << " = " << a;
}