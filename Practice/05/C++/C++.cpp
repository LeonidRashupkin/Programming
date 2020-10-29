#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double xt, x0, v0, t, g=9.8, a;
    a = g;
    // лучше всего объявить переменные типа double, таким образом мы получим более точный результат 
    cout << "Введите значения x0(в метрах), v0(в метрах на секунду в квадрате), t(в секундах) через пробел\n";
    cin >> x0 >> v0 >> t;
    xt = x0 + (v0 * t) - (a * t * t / 2);
    cout << xt;
    return 0;
}