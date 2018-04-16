while True:
        try:
                n = int(input())
        except:
                break
        i = 1
        c = 1
        while(i%n != 0):
                i = (10 * i + 1) % n
                c += 1
        print(c)
