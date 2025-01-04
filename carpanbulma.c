//bir sayının tüm çarpanlarının bulunması

#include <stdio.h>

int main(){
    
    int sayi, i;
    
    printf("Lütfen çarpanları bulunacak sayıyı yazınız.");
    scanf("%d", &sayi);
    
    for(i=1; i<=sayi; i++){
        if(sayi%i==0){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
