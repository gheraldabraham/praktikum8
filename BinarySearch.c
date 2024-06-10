// Nama File : BinarySearch.c
// Deskripsi : mencari harga x dalam tabel secara binary search
// Nama :  Gherald Abraham
// NIM : 24060123140210
// Tanggal : 15 Mei 2024

#include <stdio.h>
#include <stdbool.h>

void BinarySearch2(int T[], int N, int X, bool *Found, int *IX ){
    //kamus lokal
    int atas, bawah, tengah;
    //Algoritma 
    atas = 0;
    bawah= N-1;
    *Found = false;
    *IX = -1;

    while ((atas<=bawah ) && (!*Found))
    {
        tengah = (atas + bawah)/2;
        if (X==T[tengah])
        {
            *Found = true;
            *IX = tengah;
        }
        else if (X<T[tengah])
        {
            bawah = tengah -1;
        }
        else if (X>T[tengah])
        {
            atas = tengah +1;
        }
        
    }
    
}

int main()
{
    //kamus lokal
    int N = 13;
    int T[17]= {1,4,6,7,10,12,18,21,29,30,41,44,47};
    int X = 8;
    int IX;
    bool Found;

    //Algoritma
    BinarySearch2(T,N,X,&Found,&IX);
    if (Found)
    {
        printf("Data terdapat pada indeks ke %d ", IX);
    }
    else
    {
        printf("Data Not Found");
    }
    
    return 0;
}
