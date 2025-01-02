// değişken ve sabitlerin ekrana yazdırılması

#include <stdio.h>  

int main(){
    
    #define PI 3.14   //sabit ataması yaptık
    const int MAX=100;   // sabit atamasını const anahtar sözcüğüyle yaptık
    
    int sayi=13;   //değişken ataması yaptık
    double sayi2=3.12;    //değişken ataması yaptık
    char c='a';    //değişken ataması yaptık
    float f= 34.22;   //değişken ataması yaptık
    
    
    printf("PI= %lf\n", PI);
    printf("Max= %d\n", MAX);
    printf("sayı= %d\n", sayi);
    printf("sayı2= %lf\n", sayi2 );
    printf("c= %c\n", c);
    printf("f= %f\n", f);
    
    return 0;
}
