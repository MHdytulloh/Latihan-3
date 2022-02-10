#include <stdio.h>
#include <stdlib.h>

struct mahasiswa {
    int nim; //nim mahasiswa
    char nama [80]; //nama mahasiswa
    float persentase_hadir; //persentase kehadiran (%)
};

struct mahasiswa kls [40];

int main() {
    int n = 0; //jumlah data mahasiswa yang akan dimasukkan
    int i = 0;
    int nomor = 1;
    printf("Masukkan jumlah data mahasiswa yang akan diinput.\n");
    scanf("%i", &n);
    while (n<=0) {
        printf("jumlah data tidak valid. harap isi kembali\n");
        printf("Masukkan jumlah data mahasiswa yang akan diinput.\n");
        scanf("%i", &n);
    }
    while (i<n) {
        printf("Masukkan NIM Mahasiswa  :");
        scanf("%i", &kls[i].nim);
        printf("Masukkan Nama Mahasiswa :");
        scanf("%s", &kls[i].nama);
        printf("Masukkan Persentase Kehadiran Mahasiswa (tulis angka saja) :");
        scanf("%f", &kls[i].persentase_hadir);
        i+=1;
    }
    i = 0;
    printf("Berikut adalah mahasiswa yang kehadirannya kurang dari 80%.\n");
    while (i<n) {
        if (kls[i].persentase_hadir < 80) {
            printf("%i.\n", nomor);
            printf(" NIM Mahasiswa  : %i\n", kls[i].nim);
            printf(" Nama Mahasiswa : %s\n", kls[i].nama);
            nomor += 1;
        }
        i+=1;
    }
    return 0;
}
