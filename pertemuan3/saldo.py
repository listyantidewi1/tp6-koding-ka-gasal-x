saldo = 50000
tarik_str = input("Masukkan jumlah penarikan: ")
  
if tarik_str.isdigit():
     tarik = int(tarik_str)
     if tarik <= saldo:
         print("Transaksi Berhasil!")
     else:
         print("Saldo Tidak Cukup!")
else:
     print("Input tidak valid. Harap masukkan angka positif.")