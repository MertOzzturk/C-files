#include <stdio.h>
#include<stdlib.h>


//05220000062 Mert �zt�rk

int main()
{
    int onakadarsayi,sayac,maxsayac,maxsayi;

    for (onakadarsayi = 1; onakadarsayi <= 10; onakadarsayi++)  //Burda 1 den 10 kadar olan say�lar� sayd�r�yoruz
    {
        int num = onakadarsayi;  //Burda ise i de olu�an say�y� num de�i�kenine at�yoruz.
        sayac=0;

        while (num!=1)  //Number 1 de�ilken devam ediyor .1 olunca duruyor.
        {
            if (num%2==0) //�ift olup olmama durumu
            {
                num=num/2;   //�ift ise 2 ye b�l�yor
            }
            else
            {
                num =(num*3)+1; //tek ise 3 kat�n� al�p 1 ekliyor
            }
            sayac++;
        }

        if (sayac > maxsayac) //Bunun amac� gelen olu�an say�n�n hangisinde daha �ok say� var onu hesapl�yor.
        {
            maxsayac = sayac; //Burda e�erki di�er say�n�n seri say�s� falzla ise maximum seriyi belirleyecek
            maxsayi = onakadarsayi;    //burda ise d�nen say�n�n en b�y�k say� oldu�unu g�steriyor.
        }
    }

    printf("En uzun X serisi %d say�s�na aittir ve %d adet say� i�erir.\n", maxsayi, maxsayac+1);

    return 0;
}
