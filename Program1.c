//Write a program to calculate sum of first n natural number
#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}