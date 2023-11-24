#include<stdio.h>
int main(){
int a =2;
printf("%p",&a);
int* x = &a;// both having differnt addres //  
printf("\n%p",&x);
    return 0;
}