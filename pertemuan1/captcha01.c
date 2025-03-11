#include <stdio.h>
#include <stdlib.h>
#include <time.h>
   
int main() {
    srand(time(0));
    int captcha = rand() % 9000 + 1000; // Membuat angka 4 digit
   
    printf("Kode CAPTCHA: %d\n", captcha);
  
    int input;
    printf("Masukkan kode CAPTCHA: ");
    scanf("%d", &input);
  
    if (input == captcha) {
        printf("Verifikasi berhasil.\n");
    } else {
        printf("Verifikasi gagal.\n");
    }
    return 0;
}