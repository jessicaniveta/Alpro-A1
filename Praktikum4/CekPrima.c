/*Nama File	: CekPrima.c*/
/*Deskripsi	: mengetahui sebuah bilangan integer termasuk bilangan prima atau bukan */
/*Pembuat	: Jessica Niveta Angelina - 24060121120017*/
/*Tgl pembuatan	: [Rabu, 16-03-2022 15:29 WIB]*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Kamus
    int N;           //bilangan yang akan di cek prima atau bukan
    int i;          //inisialisasi
    int checker;    //pengecekkan

    // Algoritma
    checker = 1;
    printf("Masukkan angka yang akan dicek : ");
    scanf("%d",&N);

    for(i=2; i<=(sqrt(N));i++){
        if (N % i == 0){
            checker = 0;
            break;
        }
    }
    if(checker == 0){
        printf("Bukan bilangan prima");
    }
    else{
        printf("Bilangan prima");
    }
    return 0;
}

