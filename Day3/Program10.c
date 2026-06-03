//Write a Program to print prime number in a range
#include<stdio.h>
int main(){
    int i, j, n1, n2, prime;
    printf("Enter the range: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for(i=n1; i<=n2; i++){
        if(i<=1){
            continue;
        }
        prime=1;
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d\n ", i);
        }
    }
    return 0;
}