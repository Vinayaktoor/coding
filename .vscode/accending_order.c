#include<stdio.h>
#include"swap.c"
int main(){
    int n,i=0;
    int vt[5]={8,6,1,5,7};
  //  int sum = 0;
   //while(vt[i]!='\0'){
     //  sum++;
       //i++;
   //}
   int sum=5;
   printf("size of array:%d\n",sum);
                   for(i=0;i<=sum-1;i++){
                                       if(vt[i]>vt[i+1]){
                                       swap(&vt[i],&vt[i+1]);}
                   
      for(int j=0;j<=sum-2;j++){
                                       if(vt[j+1]>vt[j+2]){
                                      swap(&vt[j+1],&vt[j+2]);}
        }
                   }
  printf("new array:");
                      for(i=0;i<=sum-1;i++){
                       printf("%d",vt[i]);
   }
    return 0;
}