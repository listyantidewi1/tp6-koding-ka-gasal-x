jumlah = int(input("Masukkan jumlah barang: "))
total = 0

for i in range(1, jumlah + 1):
    harga = float(input(f"Masukkan harga barang ke-{i}: "))
    total += harga

print(f"Total harga: {total:.2f}")