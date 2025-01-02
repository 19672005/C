// klavyeden girilen sayının çift sayı olup olmadığını gösteren program

#include <stdio.h>

int main(){
    
    int sayi;
    
    printf("Lütfen bir sayı giriniz.\n");
    scanf("%d", &sayi);
    
    if(sayi%2==0){
        printf("Sayınız çift sayıdır.\a"); // \a sonda bip sesi çıkarır
    }
    else{
        printf("Sayınız tek sayıdır.\a");
    }
}
