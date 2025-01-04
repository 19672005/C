//kuvvet/us hesabı

#include <stdio.h>
#include <math.h>

int main(){
    
    float kuvvet, taban, sonuc;

    printf("Lütfen taban değerini giriniz.");
    scanf("%f", &taban);
    
    printf("Lütfen kuvvet değerini giriniz.");
    scanf("%f", &kuvvet);
    
    sonuc=pow(taban,kuvvet);
    
    printf("%2.1f ^ %2.1f = %2.1f", taban, kuvvet, sonuc); //buradaki %2.1f ifadesi virgülden sonra sadece bir basamak yaz demektir.
    
    return 0;
}
