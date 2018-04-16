while(True):
        n = int(input())
        a = 0
        b = 0
        if(n!=0):
                while(n):
                        numbers = [int(i) for i in input().split()]
                        if(numbers[0] > numbers[1]):
                                a+=1
                        elif(numbers[1] > numbers[0]):
                                b+=1
                        n=n-1
                print(str(a)+' '+str(b))
        else:
                break
