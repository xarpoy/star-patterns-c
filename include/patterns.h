#ifndef PATTERNS_H
#define PATTERNS_H

typedef enum {
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
} State;

void segitigaSikuSiku(int n);
void segitigaSikuSikuTerbalik(int n);
void segitigaSikuSikuKanan(int n);
void segitigaSamaKaki(int n);
void segitigaSamaKakiTerbalik(int n);
void belahKetupat(int n);
void persegi(int tinggi, int lebar);
void xPattern(int n);
void hollowPyramid(int n);
void kotakBingkai(int n);

#endif
