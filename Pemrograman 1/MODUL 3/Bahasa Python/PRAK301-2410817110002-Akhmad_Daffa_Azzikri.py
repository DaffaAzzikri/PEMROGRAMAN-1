data = input("").split()
a = int(data[0])
b = int(data[1])
c = int(data[2])

if a > b and a > c:
    if b > c:
        print(c, b, a)
    else:
        print(b, c, a)
elif b > a and b > c:
    if a > c:
        print(c, a, b)
    else:
        print(a, c, b)
else:
    if a > b:
        print(b, a, c)
    else:
        print( a, b, c)