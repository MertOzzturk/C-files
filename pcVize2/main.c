#include <stdio.h>
#include <stdlib.h>


//Mert �zt�rk 05220000062
int terscevir(int sayi); //Ters �evirme fonksiyonuz

int main()
{
    int sayi,sayac;
    printf("Enter a number value: "); //D��ar�dan bir de�er al�yoruz
    scanf(" %d",&sayi);    // Tar�yoruz
    sayac = terscevir(sayi);
    if (sayac == -1)   // c�kan sayac -1 e e�itse 2 basamakl�  de�il .
    {
        printf("Invalid input: not a two-digit number\n");
    }
    else
    {
        printf("Length of the subtraction chain: %d\n", sayac+1);
    }
    return 0;
}
int terscevir(int a)
{
    int onlar,birler,sayi,sayac,newsayi,sonuc;
    if (sayi < 10 || sayi > 99)   //E�er say� dan k���kse ve ya 99 dan b�y�kse -1 g�nder
    {
        return -1;
    }
    while (sayi>9)   //sayi 9 dan b�ykken ters �evirme i�lemi yap.
    {
        onlar = sayi/ 10;
        birler = sayi% 10;
        newsayi = (birler* 10) + onlar;
        if(newsayi>sayi)
        {
            sonuc=newsayi-sayi;
            sayi = sonuc;
            sayac++;
        }
        else
            return sayac;
    }
}




