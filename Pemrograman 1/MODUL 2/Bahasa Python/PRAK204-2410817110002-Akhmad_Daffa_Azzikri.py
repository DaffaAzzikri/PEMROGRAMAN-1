PI = 22.0 / 7.0
print("")
inputs = input().split()

if len(inputs) == 2:
    jari_jari = float(inputs[0])
    tinggi = float(inputs[1])
else:
    jari_jari = float(inputs[0])
    tinggi = float(input(""))

volume = PI * jari_jari * jari_jari * tinggi
luas = 2 * PI * jari_jari * (jari_jari + tinggi)
keliling = 2 * PI * jari_jari

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")