
//dikdörtgenin alan ve çevre hesabı


#include <stdio.h>

int main(){
    
    int uzunKenar, kisaKenar;
    int alan, cevre;
    
    printf("Lütfen uzun kenarı giriniz.");
    scanf("%d", &uzunKenar);
    printf("Lütfen kısa kenarı giriniz.");
    scanf("%d", &kisaKenar);
    
    alan= kisaKenar*uzunKenar;
    cevre= (uzunKenar+kisaKenar)* 2;
    
    printf("Dikdörtgenin alanı: %d\n", alan);
    printf("Dikdörtgenin çevresi: %d\n", cevre);
    
    return 0;
    
    
    
}
