#include <stdio.h>

int main() {
    int jumlah, i;
    float harga, total = 0;

    printf("Masukkan jumlah barang: ");
    scanf("%d", &jumlah);

    for (i = 1; i <= jumlah; i++) {
        printf("Masukkan harga barang ke-%d: ", i);
        scanf("%f", &harga);
        total += harga;
    }

    printf("Total harga: %.2f\n", total);
    return 0;
}