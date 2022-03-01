/*Nama File	: luasbujursangkar.c*/
/*Deskripsi	: menghitung dan menampilkan luas bujur sangkar*/
/*Pembuat	: Jessica Niveta Angelina - 24060121120017*/
/*Tgl pembuatan	: [Selasa, 01-03-2022 11:36 WIB]*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int sisi;
    int luas;

/*Algoritma*/
    printf("Masukkan sisi bujur sangkar: ");
    scanf("%d", &sisi);
    //l = s*s
    luas = (sisi*sisi);

     printf("Luas Bujur Sangkar = %d", luas);


    return 0;
}
