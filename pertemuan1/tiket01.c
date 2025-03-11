#include <stdio.h>
  
int main() {
    int kursi_tersedia = 50;
    int pesanan;
  
    printf("Jumlah kursi tersedia: %d\n", kursi_tersedia);
    printf("Masukkan jumlah kursi yang ingin dipesan: ");
    scanf("%d", &pesanan);
  
    if (pesanan <= kursi_tersedia) {
        kursi_tersedia -= pesanan;
        printf("Pemesanan berhasil! Sisa kursi: %d\n", kursi_tersedia);
    } else {
        printf("Kursi tidak cukup.\n");
    }
    return 0;
} 