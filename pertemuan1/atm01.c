 #include <stdio.h>
   
 int main() {
      float saldo, penarikan;
      printf("Masukkan saldo: ");
      scanf("%f", &saldo);
      printf("Masukkan jumlah penarikan: ");
      scanf("%f", &penarikan);
   
     if (penarikan <= saldo) {
         saldo -= penarikan;
         printf("Transaksi berhasil! Sisa saldo: %.2f\n", saldo);
     } else {
         printf("Saldo tidak cukup.\n");
     }
     return 0;
 }