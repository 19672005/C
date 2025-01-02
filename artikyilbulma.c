// bir yılın artık yıl olup olmadığını kontrol eden program

#include <stdio.h>

void main(){
    
    int yil;
    
    printf("Lütfen bir yıl giriniz.");
    scanf("%d", &yil);
    
    if (yil%4==0 && yil%100!=0 || yil%400==0){
        printf("%d artık yıldır.", yil);
    }
    else{
        printf("%d artık yıl değildir.", yil);
    }
    
}
