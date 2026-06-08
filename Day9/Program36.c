//Pattern Printting
#include<stdio.h>
int main(){
    int n,m,i,j;
    printf("Enter Number of Rows :");
    scanf("%d",&m);
    printf("Enter Number of Columns :");
    scanf("%d",&n);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==m || j==1 || j==n){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}