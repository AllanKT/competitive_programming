x1, y1 = [float(i) for i in input().split()]
x2, y2 = [float(i) for i in input().split()]
from math import sqrt
print("%.4f"%(sqrt(((x2-x1)**2)+((y2-y1)**2))))
