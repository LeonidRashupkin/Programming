def main():
    pass

if __name__ == '__main__':
    main()
n = int(input())
a = str(input().split())
k = 0
b = -1
i = 0
m = list(a)
while i<n:
    i += 1
    if(m[2+k] == 'a' and m[10+k] == '1' and m[9+k] == '6' and m[8+k] == '6' and m[7+k] == '5' and m[6+k] == '5'):
        print(m[2+k] + m[3+k] + m[4+k] + m[5+k] + m[6+k] + m[7+k] + m[8+k] + m[9+k] + m[10+k])
        b = 1
        k = k + 13
    else:
        k = k+ 13
        continue
if (b == -1):
    print(b)
