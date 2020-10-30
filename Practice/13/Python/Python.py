a = int(input("Введите число : "))
if (a % 2 == 0 or a % 3 == 0 or a % 5 == 0 or a % 7 == 0):
    if (a == 2 or a == 3 or a == 5 or a == 7):
        print("Простое")
    else:
        print("Составное")
else:
        print("Простое")