import math

Alas = 5
Tinggi = 12
Sisi_A = 12
Sisi_C = 5
B =(Sisi_A*Sisi_A) + (Sisi_C*Sisi_C)
Sisi_B = math.sqrt(B)
hasil_keliling = Sisi_A + Sisi_B + Sisi_C
hasil_luas = 1/2 * Alas * Tinggi


print("Diketahui :\nAlas = %d cm \nTinggi = %d cm\n"%(Alas, Tinggi))
print("Jawab :\nSisi A = %d cm\nSisi B = %.0f cm\nSisi C = %d cm"%(Sisi_A,Sisi_B,Sisi_C))
print("Keliling = %.0f cm"%(hasil_keliling))
print("Luas = %.0f cm"%(hasil_luas))