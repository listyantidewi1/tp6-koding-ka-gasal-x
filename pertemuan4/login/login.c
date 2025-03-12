#include <stdio.h>
#include <string.h> // Untuk strcmp()

int main() {
    char passwordBenar[] = "rahasia123";
    char input[20];
    int loginBerhasil = 0; // 0 = false, 1 = true

    do {
        printf("Masukkan password: ");
        scanf("%s", input);

        if (strcmp(input, passwordBenar) == 0) {
            loginBerhasil = 1;
            printf("Login berhasil!\n");
        } else {
            printf("Password salah! Coba lagi.\n");
        }
    } while (loginBerhasil == 0);

    return 0;
}