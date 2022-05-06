/*Nama File	: selection_short.c*/
/*Deskripsi	: mengurutkan tabel integer [1..N] secara ascending dengan selection sort */
/*Pembuat	: Jessica Niveta Angelina - 24060121120017*/
/*Tgl pembuatan	: [Selasa, 03-05-2022 10:38 WIB]*/


#include <stdio.h>
#include <stdlib.h>

#define n 10

int main()
{
// Kamus
    int A[]={45,65,32,21,10,8,5,42,12,18};   //inputan array tidak terurut
    int indeks,k,j,X;    //jumlah banyaknya nilai dalam array


// Algoritma

    printf("Elements array sebelum Sorting : \n");
        for(indeks=0; indeks<=n-1; indeks++){
        printf("%4i ", A[indeks]);
    }


    for (k=0; k<=n-2; k++){
        j = k;
       for( indeks = k+1; indeks<= n-1; indeks++){
        if(A[indeks] < A[j])
            j = indeks;
       }
       X = A[j];
       A[j] = A[k];
       A[k] = X;

    }


    printf("\n\nElements array setelah Sorting Ascending : \n");
    for(indeks=0; indeks<=n-1; indeks++){
        printf("%4i ", A[indeks]);
    }

return 0;

}



