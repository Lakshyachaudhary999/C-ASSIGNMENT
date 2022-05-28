#include <stdio.h>
void main(){
    int count=0,i,j,a[5];
    printf("\t\t\tEnter values of array\n");
    for(i=0;i<5;i++){
        printf("Enter values of array = ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[j]==a[i]){
                count++;
            }
        }
        if(count>1){
            printf("%d element repeated = %d\n",a[i],count);
        }
        count=0;
    } 
}
