def go(sig: list, x: int):
    if(x > 5):
        for i1 in range(x-5, x):
            print(sig[i1], ' ', end='')
        print()
    else:
        for i2 in range(n):
            print(sig[i2], ' ', end='')
        print()



def Sort(insort: list, n: int):
    for i1 in range(n-1):
        for i2 in range(n-1-i1):
            if(insort[i2] < insort[i2+1]):
                insort[i2], insort[i2+1] = insort[i2+1], insort[i2]
    return insort;




n = int(input())
sig = list(map(int, input().split(' ')))
sorted = []
count = 0
for i in range(n):
    count += 1
    sorted.append(sig[i])
    sorted = Sort(sig, count)
    go(sorted, count)

