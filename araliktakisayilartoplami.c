//Verilen aralık içerisindeki sayıların toplamı.

#include <stdio.h>

int main(){
    
    int i, altSinir, ustSinir, toplam;
    
    toplam=0;
    
    printf("Lütfen alt sınırı giriniz.");
    scanf("%d", &altSinir);
    
    printf("Lütfen üst sınırı giriniz.");
    scanf("%d", &ustSinir);
    
    for(i=altSinir; i<=ustSinir; i++){
        
        toplam+=i;
    }
    
    printf("Toplam= %d", toplam);
}
