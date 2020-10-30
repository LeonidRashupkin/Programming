#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    long int a;
    cout << "Введите число : ";
    cin >> a;
    if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0)
    {
        if (a == 2 || a == 3 || a == 5 || a == 7)
        {
            cout << "Простое";
        }
        else
        {
            cout << "Составное";
        }
    }
    else
    {
        cout << "Простое";
    }
}