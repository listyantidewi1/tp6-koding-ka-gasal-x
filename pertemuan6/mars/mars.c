 #include <stdio.h>
 #include <time.h>
   
 int main() {
    struct tm peluncuran = {0};
    int tahun, bulan, hari, durasi;
   
     // Input
     printf("Tanggal peluncuran (YYYY-MM-DD): ");
     scanf("%d-%d-%d", &tahun, &bulan, &hari);
     printf("Durasi perjalanan (hari): ");
     scanf("%d", &durasi);
  
     peluncuran.tm_year = tahun - 1900;
     peluncuran.tm_mon = bulan - 1;
     peluncuran.tm_mday = hari;
  
     // Hitung tanggal tiba
     time_t detik_peluncuran = mktime(&peluncuran);
     detik_peluncuran += durasi * 86400; // 1 hari = 86400 detik
     struct tm *tiba = localtime(&detik_peluncuran);
  
     // Batas waktu (1 November 2024)
     struct tm batas_waktu = { .tm_year=124, .tm_mon=10, .tm_mday=1 }; // 2024-1900=124
  
     // Bandingkan tanggal
     time_t detik_batas = mktime(&batas_waktu);
     char* status = (detik_peluncuran <= detik_batas) ? "SUKSES!" : "GAGAL!";
  
     printf("Tanggal tiba: %02d-%02d-%d\n%s\n", 
            tiba->tm_mday, tiba->tm_mon + 1, tiba->tm_year + 1900, status);
     return 0;
 }
  
