#include <stdio.h>

int main() {
    int harga1 = 25000, harga2 = 15000, harga3 = 14000;
    int total = harga1 + harga2 + harga3;
    float diskon = total * 0.05;
    float total_diskon = total - diskon;
    printf("Total setelah diskon 5%%: %.2f\n", total_diskon);
    return 0;
}