#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Mert Öztürk 05220000062
//02.06.2023

int function(char word[],char next[]); //fonksiyon tanýmladýk.

int main()
{
    char word[31]; //bir kelime tanýmladýk.
    char next[31]; //yeni kelime.
    int points=0; //puan hesabý yapmak için tanýmlama.
    printf("Enter a Word: ");
    scanf(" %s",word);

    while(1) // Yeni kelimeyi almak için sonsuz döngü kuruyoruz.
    {
        printf("Enter a Next Word: ");
        scanf(" %s",next);

        if(function(word,next))
        {
            points = points+5; //puaný arttýrýyoruz.
            printf(" %s\n",next); // yeni kelimeyi tekrardan yazdýrýyoruz.
            strcpy(word,next); // next kelimesini word dosyasýnýn içine atýyotuz yani yeni kelimeyi eskiye atýyoruz.
        }
        else
        {
            points=points+5; //puaný arttýrýyoruz.
            printf("Final points : %d\n",points); // Son olarak puaný gösteriyoruz.
            break;
        }

    }
    return 0;
}

int function(char word[],char next[])
{
    int changes;
    int i;

    if (strlen(word)!=strlen(next)) //eðer uzunluklarý eþit deðilse bitiriyor.
        return 0;

    for (i=0;i<strlen(word);i++) //Bu kodda tek tek kontrol ediyor her bir harf ayný mý diye
    {
        if (word[i]!=next[i]) // eðer ayný ise deðiþikliði arttýyor.
            changes++;
        if (changes>1) // Deðiþiklik 1 den fazla ise fonskiyona 0 return veriyor.
            return 0;
    }

    return 1;
}
