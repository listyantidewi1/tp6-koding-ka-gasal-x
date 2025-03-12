from datetime import datetime, timedelta

def parse_tanggal(tanggal_str):
    """Mengonversi string tanggal ke objek datetime"""
    return datetime.strptime(tanggal_str, "%Y-%m-%d")

def hitung_tanggal_tiba(tanggal_peluncuran, durasi):
    """Menghitung tanggal tiba berdasarkan durasi"""
    return tanggal_peluncuran + timedelta(days=durasi)

def cek_batas_waktu(tanggal_tiba):
    """Memeriksa apakah tanggal tiba memenuhi batas waktu"""
    batas_waktu = datetime(2024, 11, 1)
    return tanggal_tiba <= batas_waktu

def format_hasil(tanggal_tiba, status):
    """Memformat output hasil perhitungan"""
    print(f"Tanggal tiba: {tanggal_tiba.strftime('%d-%m-%Y')}")
    print("SUKSES! Tiba sebelum batas waktu" if status else "GAGAL! Melebihi batas waktu")

def main():
    # Input pengguna
    tanggal_input = input("Tanggal peluncuran (YYYY-MM-DD): ")
    durasi = int(input("Durasi perjalanan (hari): "))
    
    try:
        # Proses parsing
        tanggal_peluncuran = parse_tanggal(tanggal_input)
        
        # Perhitungan
        tiba = hitung_tanggal_tiba(tanggal_peluncuran, durasi)
        
        # Validasi
        status = cek_batas_waktu(tiba)
        
        # Output
        format_hasil(tiba, status)
        
    except ValueError:
        print("Error: Format tanggal tidak valid. Gunakan format YYYY-MM-DD")

if __name__ == "__main__":
    main()