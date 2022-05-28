#include <stdio.h>

int modulous(int *a,int *b){
    int difference,sum;
    difference=*a-*b;

    //modulous condition :

    if(difference<0){ 
        difference = -difference;
        return difference;
    }   
    else{
        return difference;
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
    printf("%d", modulous(&a,&b));
    return 0;
}