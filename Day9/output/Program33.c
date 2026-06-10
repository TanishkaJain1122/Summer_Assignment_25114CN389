//Write A Program to print reverse star pattern
#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=n-i+1;j++){
        printf("* ");
    }
    printf("\n");
}}
