n = int(input())
while(n):
        qtd = ['0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0']
        maior = 0
        txt = input()
        for i in txt:
                if(ord(i)>64 and ord(i)<91):
                        qtd[(ord(i)-65)] = int(int(qtd[ord(i)-65]) + int(1))
                if(ord(i)>96 and ord(i)<123):
                        qtd[(ord(i)-97)] = int(int(qtd[ord(i)-97]) + int(1))
        aux = []
        for i in qtd:
                aux.append(int(i))
        aux.sort()
        aux.reverse()
        for i in range(26):
                if(int(qtd[i]) == aux[0]):
                        print(chr(i+97), end='')
        print()
        n=n-1
