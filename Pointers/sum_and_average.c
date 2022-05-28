#include <stdio.h>

void average(int a,int b,int c,int *sum , int *avg);

void main(){
    int a,b,c,sum,avg;
    printf("Enter three numbers = ");
    scanf("%d %d %c",&a,&b,&c);
    average(a, b, c, &sum , &avg);
    printf("The sum is = %d",sum);
    printf("The avg is = %d",avg);


}

void average(int a,int b,int c,int *sum , int *avg){
    *sum = a+b+c;
    *avg=*sum/3;
}