n = int(input())
while(n):
        qtd = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
        txt = input()
        for i in txt:
                if(ord(i)>64 and ord(i)<91):
                        qtd[ord(i)-65] = 1
                if(ord(i)>96 and ord(i)<123):
                        qtd[ord(i)-97] = 1
        x = int(sum(qtd))
        if(x<13):
                print('frase mal elaborada')
        if(x>=13 and x<26):
                print('frase quase completa')
        if(x==26):
                print('frase completa')
        n=n-1
