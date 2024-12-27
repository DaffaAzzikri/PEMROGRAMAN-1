while True:
    print("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    choice = int(input("Masukkan Pilihan: "))

    if choice == 5:
        print("Terimakasih, telah menggunakan kalkulator Akhmad Daffa Azzikri")
        break
    elif choice < 1 or choice > 5:
        print("Input anda salah, silahkan coba lagi")
        continue

    num1 = float(input("Masukkan nilai pertama: "))
    num2 = float(input("Masukkan nilai kedua: "))

    if choice == 1:
        print(f"Hasil Penjumlahan antara {num1:.2f} dengan {num2:.2f} adalah {num1 + num2:.2f}")
    elif choice == 2:
        print(f"Hasil Pengurangan antara {num1:.2f} dengan {num2:.2f} adalah {num1 - num2:.2f}")
    elif choice == 3:
        print(f"Hasil Perkalian antara {num1:.2f} dengan {num2:.2f} adalah {num1 * num2:.2f}")
    elif choice == 4:
        if num2 != 0:
            print(f"Hasil Pembagian antara {num1:.2f} dengan {num2:.2f} adalah {num1 / num2:.2f}")
