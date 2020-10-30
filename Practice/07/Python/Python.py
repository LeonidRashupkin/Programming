v = int(input("Выберите формат ввода ( 1 - через координаты вершин; 2 - через длины сторон ) : "))
if (v == 1):
	print("Введите (x ; y) для A:\n")
	x1 = int(input())
	y1 = int(input())
	print("Введите (x ; y) для B :\n")
	x2 = int(input())
	y2 = int(input())
	print("Введите (x ; y) для С :\n")
	x3 = int(input())
	y3 = int(input())
	a = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))**0.5
	b = ((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2))**0.5
	c = ((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1))**0.5
	if ((a < b + c) and (c < b + a) and (b < c + a)):
		p = (a + b + c) / 2
		s = (p * (p - a) * (p - b) * (p - c))**0.5
		print("Площядь : ", s, "\n")
	else :
		print("Такого треугольника нет\n") 

if (v == 2) :
	print("Введите длины сторон\n")
	a = float(input())
	b = float(input())
	c = float(input())
	if ((a < b + c) and (c < b + a) and (b < c + a)): 
		p = (a + b + c) / 2;
		s = (p * (p - a) * (p - b) * (p - c))**0.5
		print("Площядь : ", s, "\n" )
	else:
		print("Такого треугольника нет")
