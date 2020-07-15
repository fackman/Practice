a = [0]*50

for i in range(0,50):
    a[i] = 1.0/float(i+1)

b = a[0]

for i in range(1,50):
    b = b + a[i] + b * a[i]

print(b)