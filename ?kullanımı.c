// soru işareti kullanımı

#include <stdio.h>

int main(){
    
    int sayi1, sayi2;
    
    printf("Lütfen birinci sayıyı giriniz.");
    scanf("%d", &sayi1);
    
    printf("Lütfen ikinci sayıyı giriniz.");
    scanf("%d", &sayi2);
    
    if (sayi1){
        
        (sayi1>sayi2)? printf("Sayı1 sayı2den büyüktür.") : printf("sayı2 sayı1den büyüktür.");
    }
    
    return 0;
    
}
