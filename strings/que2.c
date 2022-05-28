#include <stdio.h>
#include <string.h>
void main(){
    char string[100];
    int len;
    printf("Enter The string = ");
    fgets(string,100,stdin);
    len=strlen(string);
    printf("%i",len-1);
}