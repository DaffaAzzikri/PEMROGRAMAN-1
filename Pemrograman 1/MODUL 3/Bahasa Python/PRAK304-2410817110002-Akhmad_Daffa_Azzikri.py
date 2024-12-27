a = int(input(""))

if a == 0:
    print("Nol")
elif 1 <= a <= 9:
    print("satuan")
elif a == 10 or 20 <= a <= 99:
    print("puluhan")
elif 11 <= a <= 19:
    print("belasan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")