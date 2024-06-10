// Nama File : Sentinel.c
// Deskripsi : mencari harga x dalam array secara sequential menggunakan sentinel
// Nama : Gherald Abraham
// NIM : 24060123140210
// Tanggal : 15 Mei 2024

#include <stdio.h>
#include <stdbool.h>

void SEQSearchWithSentinel(int T[], int N, int X, int *IX ){

    //Kamus Lokal
    int i;

    // Algotitma

    T[N]=X;
    i = 0;

    while (T[i]!=X)
    {
       i++;
    }
    if (i<N)
    {
        *IX=i;
    }
    else
    {
        *IX=-1;
    }

}



int main()
{
    //Kamus Lokal
    int N = 10;
    int T[10]= {19,1,28,5,20,15,52,13,16,29};
    int X = 10;
    int IX;


    //Algoritma
    SEQSearchWithSentinel(T,N,X,&IX);
    if (IX!=-1)
    {
        printf("data berada pada indeks ke %d ", IX);
    }
    else
    {
        printf("data tidak ditemukan");
    }
    return 0;
}
