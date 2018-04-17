N = int(input())
while(N>0):
    l = input()
    v = 0
    for i in l:
        if(i == '1'):
            v+=2
        if(i=='2' or i=='3' or i=='5'):
            v+=5
        if(i=='4'):
            v+=4
        if(i=='6' or i=='9' or i=='0'):
            v+=6
        if(i=='7'):
            v+=3
        if(i=='8'):
            v+=7
    print(v, 'leds')
    N-=1
