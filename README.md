Kalkulator Teknik Elektro & Konversi Bilangan (CLI)

Project ini adalah program sederhana berbasis C yang berguna buat bantu hitung-hitungan dasar teknik elektro dan konversi bilangan langsung dari terminal. Cocok buat mahasiswa elektro atau siapa saja yang butuh kalkulator cepat tanpa ribet.

Fitur Utama

Apa saja yang bisa dilakukan program ini?

Hukum Ohm
Cari nilai yang hilang dari rumus dasar $V = I \times R$. Kamu bisa hitung Tegangan, Arus, atau Resistansi.

Daya Listrik
Hitung daya (Watt) dengan fleksibel pakai salah satu rumus ini:

$P = V \times I$

$P = I^2 \times R$

$P = V^2 / R$

Total Resistor
Hitung total hambatan untuk rangkaian Seri (dijumlah biasa) atau Paralel (pakai rumus $1/R_{total}$).

Konversi Bilangan
Tool praktis buat ubah-ubah format angka:

Desimal ↔ Biner

Desimal ↔ Hexadesimal

Biner ↔ Desimal

Hexadesimal ↔ Desimal

Cara Pakai

Pastikan di komputermu sudah terinstall compiler C (seperti GCC).

1. Compile Kode

Simpan kode sebagai main.c, lalu buka terminal/CMD dan jalankan:

gcc main.c -o elektro_kalkulator


2. Jalankan Program

Kalau sudah dicompile, tinggal panggil file-nya:

Windows:

elektro_kalkulator.exe


Linux / macOS:

./elektro_kalkulator


Penggunaan

Tinggal pilih menu (ketik angka 1-5) sesuai kebutuhan, masukkan nilai yang diminta (misal: tegangan atau arus), dan hasilnya akan langsung muncul.
