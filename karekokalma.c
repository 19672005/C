//karekök hesaplama

#include <stdio.h>
#include <math.h>

int main(){
    
    int sayi, karekok;
    
    printf("Lütfen karekökü hesaplanacak sayıyı giriniz.");
    scanf("%d", &sayi);
    
    karekok=sqrt(sayi);
    
    printf("%d sayısının karekökü: %d ", sayi, karekok);
    return 0;
}
