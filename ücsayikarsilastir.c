#include <stdio.h>
int main(){
    int sayi1, sayi2, sayi3, max, min;
    printf("Lütfen karşılaştırmak istediğiniz üç sayıyı giriniz.");
    scanf("%d%d%d", &sayi1, &sayi2, &sayi3);
    
    if(sayi1>sayi2 && sayi1>sayi3 && sayi2>sayi3){
        printf("En küçük sayı: %d \n En büyük sayı: %d", sayi3, sayi1);
    }
    else if(sayi2>sayi1 && sayi2>sayi3 && sayi1>sayi3){
        printf("En küçük sayı: %d \n En büyük sayı: %d", sayi3, sayi2); 
    }
    else if(sayi3>sayi1 && sayi3>sayi2 && sayi1>sayi2){
        printf("En küçük sayı: %d \n En büyük sayı: %d", sayi2, sayi3); 
    }
    else if(sayi2>sayi1 && sayi2>sayi3 && sayi3>sayi1){
        printf("En küçük sayı: %d \n En büyük sayı: %d", sayi1, sayi2); 
    }
    else if(sayi3>sayi1 && sayi3>sayi2 && sayi2>sayi1){
        printf("En küçük sayı: %d \n En büyük sayı: %d", sayi1, sayi3); 
    }
    else if(sayi1>sayi2 && sayi1>sayi3 && sayi3>sayi2){
        printf("En küçük sayı: %d \n En büyük sayı: %d", sayi2, sayi1); 
    }
}
