#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
int main()
{
    int devam = 1;
    while(devam){
    printf("\n\n*****Islemler*****\n\n");
    printf("1.Toplama islemi\n");
    printf("2.Carpma islemi\n");
    printf("3.Us alma islemi\n");
    printf("4.Denklem hesaplama (5x^2+4x+3)\n");
    printf("5.Karekok hesaplama\n");
    printf("6.Trigonometrik islem hesaplama (sin / cos / tan)\n");


    int s1,s2,secim,trigo;
    double sonuc,derece,radyan;
    printf("\nIslem seciniz:");
    scanf("%d",&secim);

    switch(secim)
    {
        case 1:
            printf("\nIki sayi giriniz:\n");
            scanf("%d%d",&s1,&s2);
            sonuc = s1+s2;
            printf("Toplam:%.2f",sonuc);
            break;
        case 2:
            printf("\nIki sayi giriniz:\n");
            scanf("%d%d",&s1,&s2);
            sonuc = s1*s2;
            printf("Carpim:%.2f",sonuc);
            break;
        case 3:
            printf("\nSirasiyla taban ve us degerlerini giriniz:\n");
            scanf("%d%d",&s1,&s2);
            sonuc = pow(s1,s2);
            printf("Sonuc:%.2f",sonuc);
            break;
        case 4:
            printf("\nx degerini giriniz:\n");
            scanf("%d",&s1);
            sonuc = 5*s1*s1+4*s1+3;
            printf("Denklem sonucu:%.2f",sonuc);
            break;
        case 5:
            printf("\nBir sayi giriniz:\n");
            scanf("%d",&s1);
            sonuc = sqrt(s1);
            printf("Karekoku:%.2f",sonuc);
            break;
        case 6:
            printf("Yapilacak islemi seciniz ----> (sin: 1/cos: 2/ tan: 3)\n");
            scanf("%d",&trigo);
            printf("\nLutfen bir aci giriniz (derece cinsinden):\n");
            scanf("%lf",&derece);

            radyan = (derece*PI)/180.0;
            switch(trigo)
            {
            case 1:
                sonuc = sin(radyan);
                printf("sin(%lf): %.2f",derece,sonuc);
                break;
            case 2:
                sonuc = cos(radyan);
                printf("cos(%lf): %.2f",derece,sonuc);
                break;
            case 3:
                sonuc = tan(radyan);
                printf("tan(%lf): %.2f",derece,sonuc);
                break;
            default:
            printf("Gecerli bir islem giriniz!");
            }
        break;
        default:
            printf("\nHatali islem girisi!!!");

            }
            printf("\n\nIsleme devam etmek ister misiniz?(Evet: 1 / Hayir: 0)\n");
            scanf("%d",&devam);

    }

    printf("Program sona erdi.\n");

    return 0;
}
