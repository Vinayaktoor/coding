#include<stdio.h>
int main(){
    printf("enter the no.:");
    int n,a;
    scanf("%d",&n);
    printf("reversal of this no. is:");
    for(int i=0;n>0;i++){
     a = n%10;
     n = n/10;
     printf("%d",a);
    }
    return 0;
}
