from datetime import datetime, timedelta
   
  # Input
tanggal_peluncuran = input("Tanggal peluncuran (YYYY-MM-DD): ")
durasi = int(input("Durasi perjalanan (hari): "))
   
 # Hitung tanggal tiba
peluncuran = datetime.strptime(tanggal_peluncuran, "%Y-%m-%d")
tiba = peluncuran + timedelta(days=durasi)
  
# Batas waktu
batas_waktu = datetime(2024, 11, 1)
  
# Output
print(f"Tanggal tiba: {tiba.strftime('%d-%m-%Y')}")
print("SUKSES! Tiba sebelum batas waktu" if tiba <= batas_waktu else "GAGAL! Melebihi batas waktu")
  
