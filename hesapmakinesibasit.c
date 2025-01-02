// basit hesap makinesi

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int secim;
    float x, y, sonuc;
    
    printf("iki sayı giriniz. ");
    scanf("%f %f", &x, &y);
    
    puts("***MENU***");
    puts("[1] Toplama");
    puts("[2] Çıkarma");
    puts("[3] Çarpma");
    puts("[4] Bölme");
    
    printf("Lütfen bir seçim yapınız.");
    scanf("%d", &secim);
    
    switch(secim){
        
        case 1:
            sonuc= x + y;
            printf("Toplam: %f\n", sonuc);
            break;
        case 2:
            sonuc= x - y;
            printf("Fark: %f\n", sonuc);
            break;
        case 3:
            sonuc= x * y;
            printf("Çarpım: %f\n", sonuc);
            break;
        case 4:
            sonuc= x / y;
            printf("Oran: %f\n", sonuc);
            break;
        default:
            puts("Yanlış seçim! \a");
    }
    return 0;
}
