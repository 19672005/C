//bir sayıya kadar çift sayıları yazdırma

#include <stdio.h>

int main(){
    
    int ustSinir,  i;
    
    printf("Lütfen üst sınırı yazınız.");
    scanf("%d", &ustSinir);
    
    for(i=1; i<=ustSinir; i++){
        
        if(i%2==0){  //eğer tek sayıları yazdırmak istiyorsak !=0 yazmamız gerekir.
            printf("%d\n", i);
        }
    }
    
    return 0;
    
}
