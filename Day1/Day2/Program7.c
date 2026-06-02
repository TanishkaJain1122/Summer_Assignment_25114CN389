//write  a program to find the product of digits of a number
#include <stdio.h>
int main(){
    int num,prod=1,r;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        prod*=num%10;
        num/=10;
    }   
    printf("The product of digits is: %d",prod);
    return 0;
}