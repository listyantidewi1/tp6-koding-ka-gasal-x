saldo = float(input("Masukkan saldo: "))
penarikan = float(input("Masukkan jumlah penarikan: "))
  
if penarikan <= saldo:
    saldo -= penarikan
    print(f"Transaksi berhasil! Sisa saldo: {saldo:.2f}")
else:
    print("Saldo tidak cukup.") 