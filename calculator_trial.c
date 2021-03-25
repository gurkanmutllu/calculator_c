#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    float sayi1,sayi2,sonuc;
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%f",&sayi1);
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%f",&sayi2);
    int i;
        int islemturu;
        printf("\n 1. Toplama");
        printf("\n 2. Cikarma");
        printf("\n 3. Carpma");
        printf("\n 4. Bolme\n"); 
        printf("Yapmak istediginiz islemi seciniz: ");
        scanf("%d",&islemturu);

            if(islemturu == 1){
                sonuc = sayi1 + sayi2;
            }
            if(islemturu == 2){
                sonuc = sayi1 - sayi2;
            }            
            if(islemturu == 3){
                sonuc = sayi1 * sayi2;
            }
            if(islemturu == 4){
                sonuc = sayi1 / sayi2;
            }
            printf("*Sonuc: %.4f",sonuc);

    while(i != 0)
    {
        printf("\nIslemi devam ettirmek icin 1 e basiniz.");
        printf("\nBitirmek icin 0 a basiniz.\n");
        scanf("%d",&i);
        
        float sayi3 = 0;

        if(i == 1)
        {
            printf("\n 1. Toplama");
            printf("\n 2. Cikarma");
            printf("\n 3. Carpma");
            printf("\n 4. Bolme\n"); 
            printf("Yapmak istediginiz islemi seciniz: ");
            scanf("%d",&islemturu);
            printf("Sayi giriniz: ");
            scanf("%f",&sayi3);
            if(islemturu == 1){
                sonuc = sonuc + sayi3;
            }
            if(islemturu == 2){
                sonuc = sonuc - sayi3;
            }            
            if(islemturu == 3){
                sonuc = sonuc * sayi3;
            }
            if(islemturu == 4){
                sonuc = sonuc / sayi3;
            }
            
            printf("*Sonuc: %.4f",sonuc);

        }
        else if(i == 0)
        {
            printf("Hesap makinesi kapandi");
        } 
    }
    getch();
    return 0;
}
