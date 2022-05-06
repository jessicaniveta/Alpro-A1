/*Nama File	: bubble_short.c*/
/*Deskripsi	: mengurutkan tabel integer [1..N] secara descending dengan counting sort */
/*Pembuat	: Jessica Niveta Angelina - 24060121120017*/
/*Tgl pembuatan	: [Senin, 02-05-2022 09:48 WIB]*/



#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
  	int i, j;
    int arr[] = {2,10,9,15,22,11,1,3,8,99};
    int temp = 0;

  /*Algoritma*/
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Elements array sebelum di sorting: \n");
    for (i = 0; i < length; i++) {
        printf("%4i ", arr[i]);
    }

    for (i = 0; i < length; i++) {        //proses sorting
        for (j = i+1; j < length; j++) {
           if(arr[i] < arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }
    printf("\n");

    //Display elements array setelah sorting
    printf("Elements array setelah di sorting descending: \n");
    for (i = 0; i < length; i++) {
        printf("%4i ", arr[i]);
    }
    printf("\n");
    return 0;
}

