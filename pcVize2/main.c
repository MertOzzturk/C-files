#include <stdio.h>
#include <stdlib.h>


//Mert Öztürk 05220000062
int terscevir(int sayi); //Ters çevirme fonksiyonuz

int main()
{
    int sayi,sayac;
    printf("Enter a number value: "); //Dýþarýdan bir deðer alýyoruz
    scanf(" %d",&sayi);    // Tarýyoruz
    sayac = terscevir(sayi);
    if (sayac == -1)   // cýkan sayac -1 e eþitse 2 basamaklý  deðil .
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
    if (sayi < 10 || sayi > 99)   //Eðer sayý dan küçükse ve ya 99 dan büyükse -1 gönder
    {
        return -1;
    }
    while (sayi>9)   //sayi 9 dan büykken ters çevirme iþlemi yap.
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




