#include <stdio.h>

int main() {
    int harga1 = 25000, harga2 = 15000, harga3 = 14000;
    int total_sebelum_pajak = harga1 + harga2 + harga3;
    float pajak = total_sebelum_pajak * 0.10;
    printf("Total setelah pajak 10%%: %.2f\n", total_sebelum_pajak + pajak);
    return 0;
}