ruangan = int(input())
zetsu = list(map(int, input().split()))

result = [zetsu[i] * (i + 1) for i in range(ruangan)]

print(' '.join(map(str, result)))