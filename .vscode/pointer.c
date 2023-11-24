#include<stdio.h>
int main (){
    int a = 2;
    int *b;
    b = &a;
    *b = 1232;
printf("%d\n",a);
printf("%u\n",&a);    
printf("%d",b);
printf("\n%u",b);
*b = 1232;
    return 0;
}