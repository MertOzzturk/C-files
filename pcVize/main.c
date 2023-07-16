#include <stdio.h>
#include<stdlib.h>


//05220000062 Mert Öztürk

int main()
{
    int onakadarsayi,sayac,maxsayac,maxsayi;

    for (onakadarsayi = 1; onakadarsayi <= 10; onakadarsayi++)  //Burda 1 den 10 kadar olan sayýlarý saydýrýyoruz
    {
        int num = onakadarsayi;  //Burda ise i de oluþan sayýyý num deðiþkenine atýyoruz.
        sayac=0;

        while (num!=1)  //Number 1 deðilken devam ediyor .1 olunca duruyor.
        {
            if (num%2==0) //çift olup olmama durumu
            {
                num=num/2;   //çift ise 2 ye bölüyor
            }
            else
            {
                num =(num*3)+1; //tek ise 3 katýný alýp 1 ekliyor
            }
            sayac++;
        }

        if (sayac > maxsayac) //Bunun amacý gelen oluþan sayýnýn hangisinde daha çok sayý var onu hesaplýyor.
        {
            maxsayac = sayac; //Burda eðerki diðer sayýnýn seri sayýsý falzla ise maximum seriyi belirleyecek
            maxsayi = onakadarsayi;    //burda ise dönen sayýnýn en büyük sayý olduðunu gösteriyor.
        }
    }

    printf("En uzun X serisi %d sayýsýna aittir ve %d adet sayý içerir.\n", maxsayi, maxsayac+1);

    return 0;
}
