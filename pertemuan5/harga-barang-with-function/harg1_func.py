# Fungsi untuk menghitung total harga setelah diskon
def hitung_total_setelah_diskon(harga, jumlah, diskon):
    total_sebelum_diskon = harga * jumlah
    total_diskon = total_sebelum_diskon * (diskon / 100)
    return total_sebelum_diskon - total_diskon
  
# Program utama
harga = float(input("Masukkan harga barang: "))
jumlah = int(input("Masukkan jumlah barang: "))
diskon = float(input("Masukkan diskon dalam persen: "))
  
total_setelah_diskon = hitung_total_setelah_diskon(harga, jumlah, diskon)
  
print(f"Total harga setelah diskon: Rp{total_setelah_diskon:.2f}")  
