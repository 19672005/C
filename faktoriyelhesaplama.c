// for döngüsü ile faktoriyel hesabı

#include <stdio.h>

int main(){
    
    long i, n, faktor;
    
    printf("Faktoriyeli hesaplanacak sayıyı giriniz.");
    scanf("%ld", &n);
    
    faktor=1;
    for(i=1; i<=n; i++){
        
        faktor=faktor*i;
    }
    printf("%ld! = %ld\n", n, faktor);
    
    return 0;
}
