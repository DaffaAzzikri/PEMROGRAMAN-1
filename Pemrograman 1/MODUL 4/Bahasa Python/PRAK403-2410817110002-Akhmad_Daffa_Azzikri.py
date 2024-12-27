a, b = input("").split()
a = int(a)
b = int(b)

if a < b:
    i = a
    j = b
    while i <= b and j >= a:
        if i == b and j == a:
            print(f"{i} {j}", end="")
        else:
            print(f"{i} {j} - ", end="")
        i += 1
        j -= 1
else:
    i = a
    j = b
    while j <= a and i >= b:
        if i == b and j == a:
            print(f"{i} {j}", end="")
        else:
            print(f"{i} {j} - ", end="")
        i -= 1
        j += 1

print()
