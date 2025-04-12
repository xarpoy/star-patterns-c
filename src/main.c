// Star Pattern
#include <stdio.h>

// Tipe Data
typedef enum{
    SEGITIGA_SIKU_SIKU,
    SEGITIGA_SIKU_SIKU_TERBALIK,
    SEGITIGA_SIKU_SIKU_KANAN,
    SEGITIGA_SAMA_KAKI,
    SEGITIGA_SAMA_KAKI_TERBALIK,
    BELAH_KETUPAT_DIAMOND,
    PERSEGI_PERSEGI_PANJANG,
    X_PATTERN,
    HOLLOW_PYRAMID,
    KOTAK_BINGKAI
}State;

int main()
{
    // Variabel
    #pragma region Variabel
    State state;
    int i, j, n, opsi;
    #pragma endregion

    // Opsi
    #pragma region Opsi
    printf("+++===PROGRAM LOOPING BINTANG===+++\n");
    printf("-----------------------------------\n\n");
    printf("1. Segitiga Siku-Siku\n");
    printf("   *\n");
    printf("   * *\n");
    printf("   * * *\n");
    printf("   * * * *\n\n");
    printf("2. Segitiga Siku-Siku Terbalik\n");
    printf("   * * * *\n");
    printf("   * * *\n");
    printf("   * *\n");
    printf("   *\n\n");
    printf("3. Segitiga Siku-Siku Kanan\n");
    printf("         *\n");
    printf("       * *\n");
    printf("     * * *\n");
    printf("   * * * *\n\n");
    printf("4. Segitiga Sama Kaki\n");
    printf("         *       \n");
    printf("       * * *     \n");
    printf("     * * * * *   \n");
    printf("   * * * * * * * \n\n");
    printf("5. Segitiga Sama Kaki Terbalik\n");
    printf("   * * * * * * * \n");
    printf("     * * * * *   \n");
    printf("       * * *     \n");
    printf("         *       \n\n");
    printf("6. Belah Ketupat/Diamond\n");
    printf("         *       \n");
    printf("       * * *     \n");
    printf("     * * * * *   \n");
    printf("       * * *     \n");
    printf("         *       \n\n");
    printf("7. Persegi/Persegi Panjang\n");
    printf("   * * *\n");
    printf("   * * *\n");
    printf("   * * *\n\n");
    printf("8. X Pattern\n");
    printf("   *   *\n");
    printf("     *  \n");
    printf("   *   *\n\n");
    printf("9. Hollow Pyramid\n");
    printf("       *     \n");
    printf("     *   *   \n");
    printf("   *       * \n\n");
    printf("10. Kotak Bingkai\n");
    printf("   * * *\n");
    printf("   *   *\n");
    printf("   *   *\n");
    printf("   * * *\n\n");
    printf("Opsi: ");
    scanf("%d", &opsi);
    #pragma endregion

    // Logic Opsi
    #pragma region Logic Opsi
    if (opsi >= 1 && opsi <= 10) {
        state = (State)(opsi - 1);
    } else {
        printf("Opsi tidak valid!\n");
        return 1;
    }
    #pragma endregion

    // State Opsi
    #pragma region State Opsi
    printf("Masukkan jumlah baris (n): ");
    scanf("%d", &n);
    printf("\n");

    switch (state)
    {
    case SEGITIGA_SIKU_SIKU:
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case SEGITIGA_SIKU_SIKU_TERBALIK:
        for(i = n; i >= 1; i--) {
            for(j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case SEGITIGA_SIKU_SIKU_KANAN:
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n - i; j++) {
                printf("  ");
            }
            for(j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case SEGITIGA_SAMA_KAKI:
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n - i; j++) {
                printf("  ");
            }
            for(j = 1; j <= 2 * i - 1; j++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case SEGITIGA_SAMA_KAKI_TERBALIK:
        for(i = n; i >= 1; i--) {
            for(j = 1; j <= n - i; j++) {
                printf("  ");
            }
            for(j = 1; j <= 2 * i - 1; j++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case BELAH_KETUPAT_DIAMOND:
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n - i; j++) {
                printf("  ");
            }
            for(j = 1; j <= 2 * i - 1; j++) {
                printf("* ");
            }
            printf("\n");
        }
        for(i = n - 1; i >= 1; i--) {
            for(j = 1; j <= n - i; j++) {
                printf("  ");
            }
            for(j = 1; j <= 2 * i - 1; j++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case PERSEGI_PERSEGI_PANJANG:
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case X_PATTERN:
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                if(j == i || j == n - i + 1)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
        break;

    case HOLLOW_PYRAMID:
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n - i; j++) {
                printf("  ");
            }
            for(j = 1; j <= 2 * i - 1; j++) {
                if(j == 1 || j == 2 * i - 1 || i == n)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
        break;

    case KOTAK_BINGKAI:
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                if(i == 1 || i == n || j == 1 || j == n)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
        break;

    default:
        printf("Opsi tidak dikenali.\n");
        break;
    }

    return 0;
}