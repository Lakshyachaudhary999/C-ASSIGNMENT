#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    switch(n%2){
        case 0:
            printf("Even");
            break;

        case 1:
            printf("Odd");
            break;
    }
}