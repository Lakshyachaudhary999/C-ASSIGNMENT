#include <stdio.h>
void main(){
    int a[5]={14,123,321,45,54},i,rev,sum=0;
    for(i=0;i<=4;i++){
        printf("Values of array are = %d \n ",a[i]);
        while(a[i]>0){
            sum=sum*10+(a[i]%10);
            a[i]/=10;
        }
        printf("Reverse Number = %d\n",sum);
        sum=0;
    }
}