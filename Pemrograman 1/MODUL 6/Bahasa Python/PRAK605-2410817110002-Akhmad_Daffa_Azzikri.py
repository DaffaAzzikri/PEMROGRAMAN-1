n = int(input())

print("Matriks A")
matriks_a = []
for i in range(n):
    baris = list(map(int, input().split()))
    matriks_a.append(baris)

print("Matriks B")
matriks_b = []
for i in range(n):
    baris = list(map(int, input().split()))
    matriks_b.append(baris)

print(f"Matriks {n}x{n}")
hasil = [[0 for _ in range(n)] for _ in range(n)]

for i in range(n):
    for j in range(n):
        for k in range(n):
            hasil[i][j] += matriks_a[i][k] * matriks_b[k][j]

for baris in hasil:
    print(' '.join(map(str, baris)))