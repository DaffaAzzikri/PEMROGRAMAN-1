limit = int(input(""))

for i in range(1, limit + 1, 2):
    print(i, end=" ")
print()

for i in range(limit if limit % 2 == 0 else limit - 1, 1, -2):
    print(i, end=" ")
print()
