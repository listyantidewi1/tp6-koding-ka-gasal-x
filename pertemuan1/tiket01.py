kursi_tersedia = 50
pesanan = int(input("Masukkan jumlah kursi yang ingin dipesan: "))
  
if pesanan <= kursi_tersedia:
    kursi_tersedia -= pesanan
    print(f"Pemesanan berhasil! Sisa kursi: {kursi_tersedia}")
else:
    print("Kursi tidak cukup.")
