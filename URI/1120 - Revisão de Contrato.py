while(True):
    lista = input()
    lista = lista.split()
    char = lista[0]
    texto = lista[1]
    if((char or texto)!='0'):
        try:
            print(int(texto.replace(char, '')))
        except:
            print(0)
    else:
        break
