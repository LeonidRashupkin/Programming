a = float(input("Введите первое число : ")) 
ch = str(input("Введите символ операции (+ или - или * или /) : "))
b = float(input("Введите второе число : "))
if (ch == "*"):
    c = a * b;
elif (ch == "/"):
    c = a / b;
elif (ch == "+"):
    c = a + b;
elif (ch == "-"):
    c = a - b;
else :
    print("Неправильный формат ввода")
print( c )
