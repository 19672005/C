// math.h fonksiyonunun kullanımı

#include <stdio.h>
#include <math.h>   // matematiksel işlemler yapabilmek için math.h kütüphanesi mutlaka kullanmalıyız.

#define PI 3.141593  // burada sabit ataması yaptık

int main(){
    
    double aci=30.0;
    
    aci*= PI/180.0;
    
    puts("30 derecenin:");
    printf("sinüsü: %lf\n", sin(aci));  //burada ve aşağısında kullandığımız işlemler math.h sayesinde
    printf("kosinüsü: %lf\n", cos(aci));
    printf("tanjantı: %lf\n", tan(aci));
    printf("kotanjantı: %lf\n", 1.0/tan(aci));
    
    return 0;
    
    
    
}
    
