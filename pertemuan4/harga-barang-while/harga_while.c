#include <stdio.h>

int main() {
    float harga, total = 0;
    char lanjut;

    do {
        printf("Masukkan harga barang (atau -1 untuk selesai): ");
        scanf("%f", &harga);

        if (harga != -1) {
            total += harga;
        }
    } while (harga != -1);

    printf("Total harga: %.2f\n", total);
    return 0;
}