import math

inputs = input().split()

if len(inputs) == 2:
    a = float(inputs[0])
    b = float(inputs[1])
else:
    a = float(inputs[0])
    b = float(input())
alas = math.sqrt(b**2 - a**2)
tinggi = a
keliling = a + b + alas
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")