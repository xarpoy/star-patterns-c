## 🌟 Star Pattern in C (Modular Version)

Program ini menampilkan berbagai **pola bintang (star patterns)** di terminal menggunakan bahasa C. Project ini telah dimodularisasi dengan memisahkan fungsi-fungsi utama dan pola ke dalam file berbeda (`main.c`, `patterns.c`, `patterns.h`) untuk kemudahan pengembangan dan pemeliharaan.

---

### ✨ Fitur Pola Bintang yang Tersedia

1. Segitiga Siku-Siku  
2. Segitiga Siku-Siku Terbalik  
3. Segitiga Siku-Siku Kanan  
4. Segitiga Sama Kaki  
5. Segitiga Sama Kaki Terbalik  
6. Belah Ketupat (Diamond)  
7. Persegi / Persegi Panjang  
8. Pola Huruf X  
9. Piramida Kosong (Hollow Pyramid)  
10. Kotak Bingkai  

---

### 🧠 Struktur Folder
```
project/
├── include/
│   └── patterns.h         # Header file: deklarasi enum dan semua fungsi pola
│
├── src/
│   ├── main.c             # Fungsi utama dan menu interaktif
│   └── patterns.c         # Implementasi semua pola bintang
│
├── bin/                   # Output executable (akan muncul setelah compile)
└── README.md              # Dokumentasi ini
```

---

### 🛠️ Cara Compile & Jalankan

#### ✅ Lewat `make` (Linux / MSYS2 / Git Bash)
```bash
make             # Compile program
./bin/star_pattern  # Jalankan program
```

#### 🪟 Jika pakai PowerShell / CMD (tanpa Makefile)
```bash
gcc src\\main.c src\\patterns.c -Iinclude -o bin\\star_pattern.exe
bin\\star_pattern.exe
```

---

### 📄 Penjelasan File

| File | Deskripsi |
|------|-----------|
| `main.c` | Berisi menu utama dan pengontrol program |
| `patterns.c` | Berisi implementasi fungsi untuk menggambar semua pola |
| `patterns.h` | Header file yang mendeklarasikan `enum State` dan semua fungsi pola |
| `Makefile` *(jika ada)* | File bantu compile otomatis (opsional) |

---

### 💡 Kelebihan Program Ini

- Menggunakan `enum` dan `switch-case` untuk struktur pilihan yang bersih.
- Modular: mudah dikembangkan dan ditambahkan pola baru.
- Mendukung **cross-platform** delay (`Sleep` vs `sleep`).
- Menyediakan validasi input dan menu interaktif.
- Bisa dikembangkan ke bentuk GUI atau file output `.txt`.

---

### 📸 Contoh Output
```
Pilih opsi (1-11): 1
Masukkan jumlah baris (n): 4

*
* *
* * *
* * * *

Kembali ke menu? (y/n):
```

---

### 🙏 Terima Kasih
Terima kasih sudah menggunakan program ini. Semoga bermanfaat untuk belajar logika pemrograman dasar, perulangan, dan struktur modular di bahasa C.