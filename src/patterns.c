#include <stdio.h>
#include "../include/patterns.h"

void segitigaSikuSiku(int n) {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            printf("*%c", j == i ? '\n' : ' ');
}

void segitigaSikuSikuTerbalik(int n) {
    for (int i = n; i >= 1; i--)
        for (int j = 1; j <= i; j++)
            printf("*%c", j == i ? '\n' : ' ');
}

void segitigaSikuSikuKanan(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf("  ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

void segitigaSamaKaki(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf("  ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("* ");
        printf("\n");
    }
}

void segitigaSamaKakiTerbalik(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) printf("  ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("* ");
        printf("\n");
    }
}

void belahKetupat(int n) {
    segitigaSamaKaki(n);
    segitigaSamaKakiTerbalik(n - 1);
}

void persegi(int tinggi, int lebar) {
    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j < lebar; j++) printf("* ");
        printf("\n");
    }
}

void xPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf((j == i || j == n - i + 1) ? "* " : "  ");
        printf("\n");
    }
    if (n % 2 == 0)
        printf("Disarankan input ganjil untuk pola X agar simetris.\n");
}

void hollowPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf("  ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf((j == 1 || j == 2 * i - 1 || i == n) ? "* " : "  ");
        printf("\n");
    }
}

void kotakBingkai(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf((i == 1 || i == n || j == 1 || j == n) ? "* " : "  ");
        printf("\n");
    }
}
