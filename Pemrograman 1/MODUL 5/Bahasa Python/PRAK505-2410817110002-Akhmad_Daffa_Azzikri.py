def Biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2020
    print(f"Perkenalkan Nama Saya : {nama}")
    print(f"Umur Saya : {tahun_sekarang - tahun_lahir}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {asal}")

tahun_lahir = int(input())
nama = input()
asal = input()

Biodata(tahun_lahir, nama, asal)