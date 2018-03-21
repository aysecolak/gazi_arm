#include <stdio.h>


int girilensayi1;
   int girilensayi2;
   char islem;
   int sonuc;


int main(void)
{




       printf("ilk sayiyi giriniz");
       scanf("%d", &girilensayi1);

       printf("lutfen istediginiz islemi seciniz");
       scanf("%s", &islem);

       printf("ikinci sayiyi giriniz");
       scanf( "%d", &girilensayi2);


    switch (islem)
    {
    case 'T':
        sonuc=girilensayi1+girilensayi2;

        break;

    case 'C':
        sonuc=girilensayi1-girilensayi2;

        break;

    case 'R':
        sonuc=girilensayi1*girilensayi2;

        break;

    case 'B':
        sonuc=girilensayi1/girilensayi2;

        break;

    }

    printf("sonuc = %d", sonuc);
    return 0;
}

