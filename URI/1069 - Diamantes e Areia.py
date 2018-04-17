op = int(input())
while(op>0):
    pilha = []
    a = 0
    texto = input()
    for i in texto:
        if(i=="<"):
            pilha.append(i)
        if(i==">" and len(pilha)>0):
            pilha.pop()
            a+=1
    print(a)
    op-=1
