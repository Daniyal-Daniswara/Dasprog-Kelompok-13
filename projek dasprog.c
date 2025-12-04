#include <stdio.h>
#include <math.h>

void pause() {
    printf("\nTekan enter untuk lanjut...");
    getchar(); getchar();
}

long long biner_ke_desimal(long long biner) {
    long long des = 0, base = 1, rem;
    while(biner > 0) {
        rem = biner % 10;
        des += rem * base;
        base *= 2;
        biner /= 10;
    }
    return des;
}

void des_ke_biner(long long des) {
    if(des == 0) {
        printf("0");
        return;
    }
    int bin[64], idx = 0;
    while(des > 0) {
        bin[idx++] = des % 2;
        des /= 2;
    }
    for(int i = idx - 1; i >= 0; i--)
        printf("%d", bin[i]);
}

void hukum_ohm() {
    float V, I, R;
    int pilihan;
    printf("\n=== Hukum Ohm ===\n");
    printf("1. Hitung Tegangan (V)\n2. Hitung Arus (I)\n3. Hitung Resistansi (R)\nPilih: ");
    scanf("%d", &pilihan);
    switch(pilihan) {
        case 1:
            printf("Masukkan Arus (I): "); scanf("%f", &I);
            printf("Masukkan Resistansi (R): "); scanf("%f", &R);
            V = I * R;
            printf("Tegangan (V) = %.2f Volt\n", V);
            break;
        case 2:
            printf("Masukkan Tegangan (V): "); scanf("%f", &V);
            printf("Masukkan Resistansi (R): "); scanf("%f", &R);
            I = V / R;
            printf("Arus (I) = %.2f Ampere\n", I);
            break;
        case 3:
            printf("Masukkan Tegangan (V): "); scanf("%f", &V);
            printf("Masukkan Arus (I): "); scanf("%f", &I);
            R = V / I;
            printf("Resistansi (R) = %.2f Ohm\n", R);
            break;
        default:
            printf("Pilihan tidak valid\n");
    }
    pause();
}

void daya() {
    float P, V, I, R;
    int pilihan;
    printf("\n=== Daya Listrik ===\n");
    printf("1. P = V x I\n2. P = I^2 x R\n3. P = V^2 / R\nPilih: ");
    scanf("%d", &pilihan);
    switch(pilihan) {
        case 1:
            printf("Masukkan Tegangan (V): "); scanf("%f", &V);
            printf("Masukkan Arus (I): "); scanf("%f", &I);
            P = V * I;
            break;
        case 2:
            printf("Masukkan Arus (I): "); scanf("%f", &I);
            printf("Masukkan Resistansi (R): "); scanf("%f", &R);
            P = I * I * R;
            break;
        case 3:
            printf("Masukkan Tegangan (V): "); scanf("%f", &V);
            printf("Masukkan Resistansi (R): "); scanf("%f", &R);
            P = (V * V) / R;
            break;
        default:
            printf("Pilihan tidak valid\n"); pause(); return;
    }
    printf("Daya (P) = %.2f Watt\n", P);
    pause();
}

void total_resistor() {
    int pilihan, n;
    float r, total = 0;
    printf("\n=== Total Resistor ===\n");
    printf("1. Seri\n2. Paralel\nPilih: ");
    scanf("%d", &pilihan);
    printf("Masukkan jumlah resistor: "); scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("R%d: ", i);
        scanf("%f", &r);
        if(r == 0 && pilihan == 2) {
            printf("Resistor tidak boleh 0 pada paralel\n"); pause(); return;
        }
        if(pilihan == 1) total += r;
        else if(pilihan == 2) total += 1/r;
    }
    if(pilihan == 2) total = 1/total;
    printf("Total Resistansi = %.2f Ohm\n", total);
    pause();
}

void konversi() {
    int pilihan;
    long long des, bin;
    char hex[20];

    printf("\n=== Konversi Bilangan ===\n");
    printf("1. Desimal ke Biner\n2. Desimal ke Hexadesimal\n3. Biner ke Desimal\n4. Hexadesimal ke Desimal\nPilih: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("Masukkan desimal: "); scanf("%lld", &des);
            printf("Biner: "); des_ke_biner(des); printf("\n"); break;
        case 2:
            printf("Masukkan desimal: "); scanf("%lld", &des);
            printf("Hexadesimal: %llX\n", des); break;
        case 3:
            printf("Masukkan biner: "); scanf("%lld", &bin);
            printf("Desimal: %lld\n", biner_ke_desimal(bin)); break;
        case 4:
            printf("Masukkan hex tanpa 0x: "); scanf("%s", hex);
            sscanf(hex, "%llX", &des);
            printf("Desimal: %lld\n", des);
            break;
        default:
            printf("Pilihan tidak valid\n");
    }
    pause();
}

int main() {
    int pilihan;
    while(1) {
        printf("\n=== Menu ===\n");
        printf("1. Hukum Ohm\n2. Daya Listrik\n3. Total Resistor\n4. Konversi Bilangan\n5. Keluar\nPilih: ");
        scanf("%d", &pilihan);
        switch(pilihan) {
            case 1: hukum_ohm(); break;
            case 2: daya(); break;
            case 3: total_resistor(); break;
            case 4: konversi(); break;
            case 5: printf("Keluar...\n"); return 0;
            default: printf("Pilihan tidak valid\n"); pause();
        }
    }
}
