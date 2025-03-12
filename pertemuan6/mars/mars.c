#include <stdio.h>

// Fungsi untuk mengecek tahun kabisat
int isLeapYear(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

// Fungsi untuk mendapatkan jumlah hari dalam bulan
int getDaysInMonth(int bulan, int tahun) {
    if(bulan == 2) return isLeapYear(tahun) ? 29 : 28;
    if(bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) return 30;
    return 31;
}

// Fungsi untuk validasi tanggal
int isValidDate(int tahun, int bulan, int hari) {
    if(tahun < 1 || bulan < 1 || bulan > 12 || hari < 1) return 0;
    return hari <= getDaysInMonth(bulan, tahun);
}

int main() {
    int tahun, bulan, hari, durasi;
    
    // Input tanggal peluncuran
    printf("Tanggal peluncuran (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &tahun, &bulan, &hari);
    
    // Validasi input
    if(!isValidDate(tahun, bulan, hari)) {
        printf("Tanggal tidak valid!\n");
        return 1;
    }
    
    // Input durasi
    printf("Durasi perjalanan (hari): ");
    scanf("%d", &durasi);
    
    // Hitung tanggal tiba
    hari += durasi;
    
    // Penyesuaian bulan dan tahun
    while(1) {
        int hari_dalam_bulan = getDaysInMonth(bulan, tahun);
        if(hari > hari_dalam_bulan) {
            hari -= hari_dalam_bulan;
            bulan++;
            if(bulan > 12) {
                bulan = 1;
                tahun++;
            }
        } else {
            break;
        }
    }
    
    // Cek batas waktu 1 November 2024
    int sukses = 0;
    if(tahun < 2024) sukses = 1;
    else if(tahun == 2024) {
        if(bulan < 11) sukses = 1;
        else if(bulan == 11 && hari <= 1) sukses = 1;
    }
    
    // Output hasil
    printf("\nTanggal tiba: %02d-%02d-%d\n", hari, bulan, tahun);
    printf(sukses ? "SUKSES! Tiba sebelum batas waktu\n" : "GAGAL! Melebihi batas waktu\n");
    
    return 0;
}