#include<stdio.h>
void swap(int* i,int* j){
int temp;
temp = *i;
*i = *j;
*j = temp;
return;
}
int main (){
     int a=2;
     int d=3;
    //printf("value of a:");
    //scanf("%d",a);// 
   // printf("value of d:");

   
    //scanf("%d",d);
    swap (&a,&d);
    printf("reverse of them:");
    printf("%d %d",a,d);    
    return 0;
}