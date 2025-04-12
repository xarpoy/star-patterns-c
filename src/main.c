#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/patterns.h"

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void delay(int seconds) {
    #ifdef _WIN32
        Sleep(seconds * 1000);
    #else
        sleep(seconds);
    #endif
}

int main() {
    int opsi, n, tinggi, lebar;
    char ulang;

    do {
        clearScreen();
        printf("=== PROGRAM POLA BINTANG ===\n");
        printf("1. Segitiga Siku-Siku\n2. Segitiga Siku-Siku Terbalik\n3. Segitiga Siku-Siku Kanan\n");
        printf("4. Segitiga Sama Kaki\n5. Segitiga Sama Kaki Terbalik\n6. Belah Ketupat\n");
        printf("7. Persegi / Persegi Panjang\n8. X Pattern\n9. Hollow Pyramid\n10. Kotak Bingkai\n11. Keluar\n");
        printf("Pilih opsi (1-11): ");
        scanf("%d", &opsi);

        if (opsi == 11) break;

        State state = (State)(opsi - 1);

        if (opsi == 7) {
            printf("Masukkan tinggi: "); scanf("%d", &tinggi);
            printf("Masukkan lebar: "); scanf("%d", &lebar);
        } else {
            printf("Masukkan jumlah baris (n): "); scanf("%d", &n);
            if (n <= 0) {
                printf("Nilai harus lebih dari 0!\n");
                return 1;
            }
        }

        switch (state) {
            case SEGITIGA_SIKU_SIKU: segitigaSikuSiku(n); break;
            case SEGITIGA_SIKU_SIKU_TERBALIK: segitigaSikuSikuTerbalik(n); break;
            case SEGITIGA_SIKU_SIKU_KANAN: segitigaSikuSikuKanan(n); break;
            case SEGITIGA_SAMA_KAKI: segitigaSamaKaki(n); break;
            case SEGITIGA_SAMA_KAKI_TERBALIK: segitigaSamaKakiTerbalik(n); break;
            case BELAH_KETUPAT_DIAMOND: belahKetupat(n); break;
            case PERSEGI_PERSEGI_PANJANG: persegi(tinggi, lebar); break;
            case X_PATTERN: xPattern(n); break;
            case HOLLOW_PYRAMID: hollowPyramid(n); break;
            case KOTAK_BINGKAI: kotakBingkai(n); break;
            default: printf("Opsi tidak valid!\n"); break;
        }

        printf("\nKembali ke menu? (y/n): ");
        scanf(" %c", &ulang);
    } while (tolower(ulang) == 'y');

    printf("Terima kasih telah menggunakan program!\nTunggu 3 detik...\n");
    for (int i = 1; i <= 3; i++) {
        printf("%d ", i); fflush(stdout); delay(1);
    }
    return 0;
}
