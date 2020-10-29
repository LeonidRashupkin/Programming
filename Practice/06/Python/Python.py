a = float(input("Для уравнения вида ax^2+bx+c=0\nУкажите коэфициент а "))
b = float(input("Укажите коэфициент b "))
c = float(input("Укажите коэфициент c "))
if a == 0:
    if b != 0:
        x = -c / b;
        print("x = ", x)
    else:
        c == 0;
        print("c = 0")
elif b == 0:
    if c > 0:
        print("Корней нет")
    else :
        x1 = (-c / a)**0.5;
        x2 = -((-c / a)**0.5);
        print("x1 = ", x1, "\nx2 = ", x2)
elif (c == 0):
    x1 = 0;
    x2 = -b / a;
    print("x1 = ", x1, "\nx2 = ", x2)
else:
    D = (pow(b, 2)) - (4 * a * c);
    if (D < 0):
        print("Действительных корней нет")
    elif (D == 0):
        x = -b / 2 * a;
        print("x = ", x)
    else:
        x1 = (-b - (D**0.5)) / (2 * a);
        x2 = (-b + (D**0.5)) / (2 * a);
        print("x1 = ", x1, "\nx2 = ", x2)