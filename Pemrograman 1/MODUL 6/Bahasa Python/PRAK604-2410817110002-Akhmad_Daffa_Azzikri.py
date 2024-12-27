kode = input().strip()
kata_kata = input().strip()

if len(kode) != len(kata_kata):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    bintang = 0
    pagar = 0
    hasil = []

    for i in range(len(kode)):
        if kode[i] == ' ' and kata_kata[i] == ' ':
            continue
        if kode[i] == kata_kata[i]:
            hasil.append('*')
            bintang += 1
        else:
            hasil.append('#')
            pagar += 1

    print("".join(hasil))
    print(f"* = {bintang}")
    print(f"# = {pagar}")
    print("Pesan Asli" if bintang >= pagar else "Pesan Palsu")