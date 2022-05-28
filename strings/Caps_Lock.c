#include <stdio.h>
#include <string.h>
void main(){
    char lowercase[20],uppercase;
    printf("Enter The String = ");
    gets(lowercase);
    printf("Uppercased String is = ");
    puts(strupr(lowercase));
}