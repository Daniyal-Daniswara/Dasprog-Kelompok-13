Kalkulator Teknik Elektro & Konversi Bilangan
Program C berbasis baris perintah (CLI) ini dirancang untuk membantu perhitungan dasar dalam teknik elektro serta melakukan konversi sistem bilangan.

Fitur
Program ini memiliki menu utama dengan empat fungsi utama:

Hukum Ohm
Menghitung salah satu variabel jika dua variabel lainnya diketahui:
Tegangan (V)
Arus (I)
Resistansi (R)

Daya Listrik
Menghitung daya (Watt) menggunakan tiga variasi rumus:
P = V × I
P = I² × R
P = V² / R

Total Resistor
Menghitung resistansi total untuk sejumlah resistor ($n$) dalam konfigurasi:
Rangkaian Seri ($R_{total} = R_1 + R_2 + ... + R_n$)
Rangkaian Paralel ($\frac{1}{R_{total}} = \frac{1}{R_1} + \frac{1}{R_2} + ... + \frac{1}{R_n}$)

Konversi Bilangan
Melakukan konversi antar sistem bilangan:
Desimal ke Biner
Desimal ke Hexadesimal
Biner ke Desimal
Hexadesimal ke Desimal

Cara Kompilasi
Pastikan Anda sudah menginstal compiler C (seperti GCC) di komputer Anda.
Simpan kode program ke dalam file bernama main.c (atau nama lain yang Anda inginkan).
Buka terminal atau command prompt.
Jalankan perintah berikut untuk mengompilasi:
gcc main.c -o elektro_kalkulator

Cara Menjalankan
Setelah kompilasi berhasil, jalankan program dengan perintah berikut:

Di Windows:
elektro_kalkulator.exe

Di Linux / macOS:
./elektro_kalkulator

Penggunaan
Saat program berjalan, pilih menu dengan mengetikkan angka 1 sampai 5 lalu tekan Enter.
Ikuti instruksi di layar untuk memasukkan nilai (misalnya nilai Arus atau Tegangan).
Program akan menampilkan hasil perhitungan.
Tekan Enter untuk kembali ke menu utama.
Pilih opsi 5 untuk keluar dari program.
