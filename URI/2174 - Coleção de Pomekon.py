n = int(input())
pok = []
while(n):
        nome = input()
        if(not nome in pok):
                pok.append(nome)
        n=n-1
print('Falta(m) '+str(151 - len(pok))+' pomekon(s).')
