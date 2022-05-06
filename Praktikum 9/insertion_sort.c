/*Nama File	: insertion_short.c*/
/*Deskripsi	: mengurutkan tabel integer [1..N] secara ascending dengan insertion sort */
/*Pembuat	: Jessica Niveta Angelina - 24060121120017*/
/*Tgl pembuatan	: [Selasa, 03-05-2022 10:38 WIB]*/


#include <stdio.h>
#include <stdlib.h>

#define n 10

int main()
{
// Kamus
    int A[]={17,24,38,1,2,3,90,87,66,54};   //inputan array tidak terurut
    int indeks,k,X;    //jumlah banyaknya nilai dalam array


// Algoritma

     printf("Elements array sebelum Sorting : \n");
    for(indeks=0; indeks<=n-1; indeks++){
        printf("%4i ", A[indeks]);
    }

    for (k=1; k<=n-1; k++){
        indeks = k;
        X = A[indeks];
        while(indeks>=1 && A[indeks-1] > X){
            A[indeks] = A[indeks-1];
            indeks --;
        }
        A[indeks] = X;

    }

    printf("\n\n Elements array setelah Sorting Ascending : \n");
    for(indeks=0; indeks<=n-1; indeks++){
        printf("%4i ", A[indeks]);
    }

return 0;

}

