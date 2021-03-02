def main():
    pass

if __name__ == '__main__':
    main()

def restart():
    import random
    n = random.randint(0, 100)
    print(n)
    print("Вас приветствует игра Угадай число\nВведите число\n")
    i = 0
    while i < 5:
        i = i + 1;
        a1 = int(input())
        if (a1 < n):
                print("Загаданное число больше\n")
        elif(a1 > n):
                print("Загаданное число меньше\n")
        elif(a1 == n):
                print("Поздравляю! Вы угадали\nХотите сыграть еще? (1 - ДА)\n")
                r = input()
                if(r == 1):
                    exit(1)
    print("Вы проиграли. Было загадано:",n,"\nХотите начать сначала? (1 - ДА )")
    r = int(input())
    if (r == 1):
        restart()
    else:
        exit(1)

restart()
