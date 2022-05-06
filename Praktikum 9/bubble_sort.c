/*Nama File	: bubble_short.c*/
/*Deskripsi	: mengurutkan tabel integer [1..N] secara descending dengan bubble sort */
/*Pembuat	: Jessica Niveta Angelina - 24060121120017*/
/*Tgl pembuatan	: [Selasa, 03-05-2022 10:38 WIB]*/


#include <stdio.h>
#include <stdlib.h>

#define n 10

int main()
{
// Kamus
    int A[]={35,80,15,23,77,89,45,21,10,54};   //inputan array tidak terurut
    int indeks,k,X;    //jumlah banyaknya nilai dalam array


// Algoritma

    void BubbleSort(){          //proses sorting
    for (k=0; k<=n-2; k++){
        for(indeks=0; indeks<=n-2; indeks++){
            if (A[indeks] < A[indeks + 1]){
                X = A[indeks];
                A[indeks] = A[indeks + 1];
                A[indeks + 1] = X;
            }
        }
    }
    }

    printf("Elements array sebelum Sorting : \n");
    for(indeks=0; indeks<n; indeks++){
        printf("%4i ", A[indeks]);
    }
    BubbleSort();
    printf("\n\nElements array setelah Sorting Descending : \n");
    for(indeks=0; indeks<n; indeks++){
        printf("%4i ", A[indeks]);
    }

return 0;
}
