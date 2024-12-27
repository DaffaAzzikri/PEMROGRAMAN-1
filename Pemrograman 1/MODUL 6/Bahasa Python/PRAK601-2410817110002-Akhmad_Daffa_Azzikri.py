baris, kolom = map(int, input().split())
isi = list(map(int, input().split()))

matrix = [isi[i * kolom:(i + 1) * kolom] for i in range(baris)]

for baris2 in matrix:
    print(' '.join(map(str, baris2)))