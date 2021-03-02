def main():
    pass

if __name__ == '__main__':
    main()
import datetime
print("Введите время первой встречи\n")
import re
c = input()
R = re.findall(r'\d*\.\d+|\d+', c)
R = [int(i) for i in R]
h1 = R[0]
m1 = R[1]

while(m1 > 59):
    m1 = m1 -60
    h1 = h1 + 1;

print("Ведите время второй встречи в виде h:m\n")
c = input()
R = re.findall(r'\d*\.\d+|\d+', c)
R = [int(i) for i in R]
h2 = R[0]
m2 = R[1]

while(m2 > 59):
    m2 = m2 -60
    h2 = h2 + 1;

if(m1<0 or h1<0 or m2<0 or h1<0):
    print( "Время не может быть отрицательным");
if(h1 > 24 or h2 > 24):
    print("В сутках 24 часа!");
if(h1 == h2 and m1 == m2):
    print("Встреча состоится");
elif(h1 == h2 and ((m1 - m2) > 15 or (m2 - m1) > 15)):
    print("Встреча не состоится");
elif(h1 == h2 and ((m1 - m2) <= 15 or (m2 - m1) <= 15)):
    print("Встреча состоится");
elif((h1 - h2) > 1 or (h2 - h1) > 1):
    print("Встреча не состоится");
elif(h1 - h2 == 1 or h2 - h1 == 1):
    if (h1 > h2):
        if(m2 - 60 - m1 < 15):
            print("Встреча состоится")
        else:
            print("Встреча не состоится")
    elif(h2 > h1):
        if( m1 - 60 - m2 < 15):
            print("Встреча состоится")
        else:
            print("Встреча не состоится");
