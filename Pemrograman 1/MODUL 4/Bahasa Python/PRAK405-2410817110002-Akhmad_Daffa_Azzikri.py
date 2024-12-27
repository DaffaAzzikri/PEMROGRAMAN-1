n, k = input("").split()
k = int (k)
n = int (n)

total_sum = 0
for i in range(1, n + 1):
    sum2 = sum(j * k for j in range(1, i + 1))
    for j in range(1, i + 1):
        print(f"({j} * {k})", end=" ")
        if j < i:
            print("+", end=" ")
    print(f"= {sum2}")
    total_sum += sum2

print(total_sum)