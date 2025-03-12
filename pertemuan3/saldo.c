 #include <stdio.h>
   
 int main() {
    int saldo = 50000, tarik;
   
    printf("Masukkan jumlah penarikan: ");
    if (scanf("%d", &tarik) != 1) {
        printf("Input tidak valid. Harap masukkan angka.\n");
        return 1;  // Keluar dari program karena input tidak valid
    }
  
    if (tarik < 0) {
         printf("Jumlah penarikan harus positif!\n");
     } else if (tarik <= saldo) {
         printf("Transaksi Berhasil!\n");
     } else {
         printf("Saldo Tidak Cukup!\n");
     }
  
     return 0;
 }
  
