#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, c, x, x1, x2, D;
    cout << "Для уравнения вида ax^2+bx+c=0\nУкажите коэфициент а ";
    cin >> a;
    cout << "Укажите коэфициент b ";
    cin >> b;
    cout << "Укажите коэфициент c ";
    cin >> c;
    if (a == 0)
    {
        if (b != 0)
        {
            x = -c / b;
            cout << "x = " << x;
        }
        else
        {
            c = 0;
            cout << "c = 0";
        }
    }
    else if (b == 0)
    {
        if (c > 0)
        {
            cout << "Корней нет";
        }
        else 
        {
            x1 = sqrt(-c / a);
            x2 = -(sqrt(-c / a));
            cout << "x1 = " << x1 << endl << "x2 = " << x2;
        }
    }
    else if (c == 0)
    {
        x1 = 0;
        x2 = -b / a;
        cout << "x1 = " << x1 << endl << "x2 = " << x2;
    }
    else
    {
        D = (pow(b, 2)) - (4 * a * c);
        if (D < 0)
        {
            cout << "Действительных корней нет";
        }
        else if (D == 0)
        {
            x = -b / 2 * a;
            cout << "x = " << x ;
        }
        else
        {
            x1 = (-b - sqrt(D)) / (2 * a);
            x2 = (-b + sqrt(D)) / (2 * a);
            cout << "x1 = " << x1 << endl << "x2 = " << x2;
        }
    }
}