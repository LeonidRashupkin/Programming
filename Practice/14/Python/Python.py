n = int(input("Введите число : "))
a = 2
b = 0
while a <= n:
	b = b + 1
	a = 2
	a = a**b
if (n == 0):
	print("0")
elif (n == 1):
	print("1")
elif (n == 2):
	print("2")
else:
	print(b)