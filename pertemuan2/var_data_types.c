#include <stdio.h>

int main() {
    // Deklarasi variabel dengan tipe data berbeda
    int usia;
    float tinggi;
    char nama[50];

    // Input pengguna
    printf("Masukkan usia (angka bulat): ");
    scanf("%d", &usia);

    printf("Masukkan tinggi (desimal, contoh: 1.75): ");
    scanf("%f", &tinggi);

    printf("Masukkan nama: ");
    scanf("%s", nama);

    // Output nilai variabel
    printf("\n=== HASIL ===\n");
    printf("Usia: %d tahun\n", usia);
    printf("Tinggi: %.2f meter\n", tinggi);
    printf("Nama: %s\n", nama);

    return 0;
}