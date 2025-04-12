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
    if (opsi == 1){
        state = SEGITIGA_SIKU_SIKU;
    } else if (opsi == 2){
        state = SEGITIGA_SIKU_SIKU_TERBALIK;
    } else if (opsi == 3){
        state = SEGITIGA_SIKU_SIKU_KANAN;
    } else if (opsi == 4){
        state = SEGITIGA_SAMA_KAKI;
    } else if (opsi == 5){
        state = SEGITIGA_SAMA_KAKI_TERBALIK;
    } else if (opsi == 6){
        state = BELAH_KETUPAT_DIAMOND;
    } else if (opsi == 7){
        state = PERSEGI_PERSEGI_PANJANG;
    } else if (opsi == 8){
        state = X_PATTERN;
    } else if (opsi == 9){
        state = HOLLOW_PYRAMID;
    } else if (opsi == 10){
        state = KOTAK_BINGKAI;
    }
    #pragma endregion

    // State Opsi
    #pragma region State Opsi
    switch (state)
    {
    case SEGITIGA_SIKU_SIKU:
        /* code */
        break;
    case SEGITIGA_SIKU_SIKU_TERBALIK:
        /* code */
        break;
    case SEGITIGA_SIKU_SIKU_KANAN:
        /* code */
        break;
    case SEGITIGA_SAMA_KAKI:
        /* code */
        break;
    case SEGITIGA_SAMA_KAKI_TERBALIK:
        /* code */
        break;
    case BELAH_KETUPAT_DIAMOND:
        /* code */
        break;
    case PERSEGI_PERSEGI_PANJANG:
        /* code */
        break;
    case X_PATTERN:
        /* code */
        break;
    case HOLLOW_PYRAMID:
        /* code */
        break;
    case KOTAK_BINGKAI:
        /* code */
        break;
    default:
        break;
    }
    #pragma endregion

    return 0;
}