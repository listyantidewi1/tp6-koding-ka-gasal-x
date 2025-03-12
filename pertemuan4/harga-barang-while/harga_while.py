total = 0

while True:
    harga = input("Masukkan harga barang (atau 'selesai' untuk berhenti): ")
    if harga.lower() == "selesai":
        break
    total += float(harga)

print(f"Total harga: {total:.2f}")