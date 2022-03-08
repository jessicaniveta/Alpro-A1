/*Nama File	: CekHari.c*/
/*Deskripsi	: menuliskan ke layar
nama-nama Hari dari nomor hari, yaitu 1 s.d. 7 yang dibaca dari masukan keyboard*/
/*Pembuat	: Jessica Niveta Angelina - 24060121120017*/
/*Tgl pembuatan	: [Selasa, 08-03-2022 11:43 WIB]*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus lokal
    int x;

//Algoritma
    printf("Masukkan nomor hari yang akan diubah ke nama hari : ");
    scanf("%d", &x);

    switch(x){
    case 1 :
        printf("Senin");
        break;
    case 2:
        printf("Selasa");
        break;
    case 3:
        printf("Rabu");
        break;
    case 4:
        printf("Kamis");
        break;
    case 5:
        printf("Jumat");
        break;
    case 6:
        printf("Sabtu");
        break;
    case 7:
        printf("Minggu");
        break;

    default:
        printf("Masukkan Nomor Hari Tidak Tepat");
    }
   return 0;
}
