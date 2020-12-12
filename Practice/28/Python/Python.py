import math
def rr(x:int):
    di = []
    cn = 2
    while(1):
        if(x % cn == 0 and cn != 1):
            x = x/cn
            di.append(cn)
            cn = 0

        elif(cn == x):
            if(cn != 1):
                di.append(cn)
            return di
        cn +=1
    print(di)
    return di
def tt(x:int) -> None:
    di = []
    di = rr(x)
    tp = 0
    if(len(di) == 1):
        print(di[0])
        exit(1)
    print(di[0],end='',sep='')
    for i in range(1, len(di)):
        if(di[i-1] == di[i]):
            dg = 1;
            cn = i
            while(di[cn-1] == di[cn]):
                if(tp == di[cn]):
                    break
                dg+=1
                cn+=1
                if(cn == len(di)):
                    break
            if(dg != 1):
                print("^",dg,end='',sep='')
            tp = di[cn-1]
            i = cn-1
        else:
            print("*",di[i],end='',sep='')
x = int(input())
tt(x)
