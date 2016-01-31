x1,y1=map(float,raw_input().split())
x2,y2=map(float,raw_input().split())
a=(x2-x1)**2
b=(y2-y1)**2
import math
d=math.sqrt(a+b)
print "%.4f"%d
