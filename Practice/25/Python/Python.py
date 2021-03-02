
import random

def out(type1: list, n: int):
	for i in range(n):
		print(type1[i], ' ', end='')
	print()

def Sort(type1: list, check: bool) -> list:
    n = int(len(type1))
    if (check):
        for i in range(n-1):
            if(type1[i]<type1[i+1]):
                return False
        return True
    else:
        for i in range(n-1):
            if(type1[i]>type1[i+1]):
                return False
        return True

def BozoSort1(type1: list, check = True) -> list:
	sorted = False
	n = len(type1)
	if (check):
		while (Sort(type1,check) == False):
			random1 = random.randint(0, (n - 1))
			random2 = random.randint(0, (n - 1))
			type1[random1], type1[random2] = type1[random2], type1[random1]

		return type1
	else:
		while(Sort(type1,check) == False):
			random1 = random.randint(0, (n - 1))
			random2 = random.randint(0, (n - 1))
			type1[random1], type1[random2] = type1[random2], type1[random1]

		return type1

def BozoSort2(type2: list, check = True) -> list:
	n = int(len(type2))
	type1 = []
	for i in range(n):
		for i1 in range(n):
			type1.append(type2[i][i1])
	del i, i1
	return BozoSort1(type1, check)

def BozoSort3(a1: int, a2: int, a3: int, check = True) -> list:
	return BozoSort1([a1, a2, a3], check)

n = int(input())
sqrt = pow(n, .5)
type1 = list(map(int, input().split(' ')))

type2 = []
temp = []
count = 0
for i in type1:
    temp.append(i)
    count +=1
    if count % sqrt == 0:
        type2.append(temp)
        temp = []
        count = 0
del temp, count, i
del(type1[n::])

out(BozoSort1(type1), n)
out(BozoSort1(type1, False), n)
out(BozoSort2(type2), n)
out(BozoSort2(type2, False), n)
out(BozoSort3(type1[0], type1[1], type1[2]), 3)
out(BozoSort3(type1[0], type1[1], type1[2], False), 3)