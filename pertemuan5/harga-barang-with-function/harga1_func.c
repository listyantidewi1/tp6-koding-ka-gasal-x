 #include <stdio.h>
   
 // Fungsi untuk menghitung total harga setelah diskon
 float hitung_total_setelah_diskon(float harga, int jumlah, float diskon) {
    float total_sebelum_diskon = harga * jumlah;
    float total_diskon = total_sebelum_diskon * (diskon / 100);
    return total_sebelum_diskon - total_diskon;
  }
   
 int main() {
     float harga, diskon, total_setelah_diskon;
     int jumlah;
  
     // Input dari pengguna
     printf("Masukkan harga barang: ");
     scanf("%f", &harga);
     
     printf("Masukkan jumlah barang: ");
     scanf("%d", &jumlah);
     
     printf("Masukkan diskon dalam persen: ");
     scanf("%f", &diskon);
  
    // Memanggil fungsi untuk menghitung total setelah diskon
     total_setelah_diskon = hitung_total_setelah_diskon(harga, jumlah, diskon);
  
     // Menampilkan hasil
     printf("Total harga setelah diskon: Rp%.2f\n", total_setelah_diskon);
  
     return 0;
 }
  
