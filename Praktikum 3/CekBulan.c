/*Nama File	: CekBulan.c*/
/*Deskripsi	: menuliskan ke layar
nama-nama bulan dari nomor bulan, yaitu 1 s.d. 12 yang dibaca dari masukan keyboard*/
/*Pembuat	: Jessica Niveta Angelina - 24060121120017*/
/*Tgl pembuatan	: [Selasa, 08-03-2022 11:56 WIB]*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus lokal
    int x ;

//Algoritma
    printf("Masukkan nomor bulan yang akan diubah ke nama bulan : ");
    scanf("%d", &x);

    switch(x){
    case 1 :
        printf("Januari");
        break;
    case 2:
        printf("Februari");
        break;
    case 3:
        printf("Maret");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Mei");
        break;
    case 6:
        printf("Juni");
        break;
    case 7:
        printf("Juli");
        break;
    case 8:
        printf("Agustus");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("Oktober");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("Desember");
        break;

    default:
        printf("Masukkan Nomor Bulan Tidak Tepat");
    }
   return 0;
}







