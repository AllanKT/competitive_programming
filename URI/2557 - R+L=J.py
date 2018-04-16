while True:
        try:
                x = input()
                r = ""
                l = ""
                j = ""
                flag_equal = False
                flag_sum = False
                for i in x:
                        if(i=='+'):
                                flag_sum = True
                                continue
                        if(i=='='):
                                flag_equal = True
                                continue
                        if((not flag_sum) and (not flag_equal)):
                                r += i
                        elif(flag_sum and (not flag_equal)):
                                l += i
                        elif(flag_sum and flag_equal):
                                j += i
                if(r == 'R'):
                        print(int(j) - int(l))
                if(l == 'L'):
                        print(int(j) - int(r))
                if(j == 'J'):
                        print(int(r) + int(l))
        except:
                break
