//Pattern Printting
#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==m || j==1 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }}