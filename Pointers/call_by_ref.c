#include <stdio.h>

void change(int *a);

void main(){
    int x,y;
    scanf("%d",&x);
    change(&x);
    printf("The value of a is %d",x);
}

void change(int *a){
    (*a)*=10;
}