#include <stdio.h>
void main(){
    int i,a[5]={2,3,4,5,6},b[5]={7,8,9,10,11},c[10];
    for(i=0;i<5;i++){
        c[i]=a[i];
    }
    for(i=0;i<5;i++){
        c[5+i]=b[i];
    }
    for(i=0;i<10;i++){
        printf("c[%d] = %d\n",i,c[i]);
    }
}