n = input()
cont = 0
for i in n:
        if(i=='4' or i=='7'):
                cont+=1
if(cont==4 or cont==7):
        print('YES')
else:
        print('NO')