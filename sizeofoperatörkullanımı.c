//c programlama dilinde sizeof operatörünün kullanımı
#include <stdio.h> //önişlemci

int main()  // ana fonksiyon başlangıcı
{
    printf("char :%d bayt \n", sizeof(char));
    printf("int :%d bayt \n", sizeof(int));
    printf("float :%d bayt \n", sizeof(float));
    printf("double :%d bayt \n", sizeof(double));
    printf("short :%d bayt \n", sizeof(short));
    printf("long :%d bayt \n", sizeof(long));
    printf("unsigned long :%d bayt \n", sizeof(unsigned long));
    printf("unsigned short:%d bayt \n", sizeof(unsigned short));
    printf("unsigned int :%d bayt \n", sizeof(unsigned int)); // // Unsigned int sadece pozitif veya sıfır olabilir
    printf("unsigned char :%d bayt\n", sizeof(unsigned char));
    printf("long double :%d bayt \n", sizeof(long double));
    

    return 0;
}
