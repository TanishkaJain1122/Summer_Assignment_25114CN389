//pattern Printting
#include<stdio.h>
int main(){
    int n,i,j;
    char ch;
    printf("Enter Number of Rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            ch=j+64;
            printf("%c", ch);
        }
        printf("\n");
    }
}