#include <stdio.h>
void main(){
    int *j,i;
    printf("Enter your age = ");
    scanf("%d",&i);
    j=&i;
    printf("The address of your registered age in our system memory is = %u, and the age of registered address - %u is %u, and the address of 'j' is %u",j,j,*j,&j);
    // printf("",j,*j);
}