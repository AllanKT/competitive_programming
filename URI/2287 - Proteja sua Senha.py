p = 1
while(True):
        n = int(input())
        if(n == 0):
                break
        listo = []
        for j in range(0, n):
                listo.insert(j, [i for i in input().split()])
        print('Teste '+str(p))
        p+=1
        for s in range(10, 16):
                value = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
                idx = 0
                v = 0
                for i in listo:
                        a = 0
                        b = 0
                        if(i[s] == 'A'):
                                a = 0
                                b = 1
                        if(i[s] == 'B'):
                                a = 2
                                b = 3
                        if(i[s] == 'C'):
                                a = 4
                                b = 5
                        if(i[s] == 'D'):
                                a = 6
                                b = 7
                        if(i[s] == 'E'):
                                a = 8
                                b = 9
                        value[int(i[a])] = value[int(i[a])]+1
                        value[int(i[b])] = value[int(i[b])]+1
                r = 0
                for j in value:
                        r+=1
                        if(j > v):
                                v = j
                                idx = r
                print(str(idx-1), end = ' ')
        print()
        print()

