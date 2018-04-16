t = input()
f = []
b = []
for i in t:
    if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u'):
        f.append(i)
        b.insert(0, i)
if(b == f):
    print('S')
else:
    print('N')
