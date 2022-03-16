/*Nama File	: FaktorBil.c*/
/*Deskripsi	: menentukan faktor-faktor bilangan dari bilangan integer */
/*Pembuat	: Jessica Niveta Angelina - 24060121120017*/
/*Tgl pembuatan	: [Rabu, 16-03-2022 15:13 WIB]*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
// Kamus
    int N;    //bilangan yang akan difaktorkan
    int i;    //inisialisasi

    printf("Masukkan angka yang akan difaktorkan: ");
    scanf("%d",&N);

    for(i=1; i<=N ;i++){
        if (N % i == 0){
            printf("%d , ", i);
        }
    }
    return 0;
}

