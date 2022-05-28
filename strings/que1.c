#include <stdio.h>
#include <string.h>
void main(){
    char first[100],second[100];
    int compare;
    gets(first);
    gets(second);
    compare=strcmp(first,second);
    if(compare==0){
        printf("Equal String");
    }
    else{
        printf("Unqual Strings");
    }
}