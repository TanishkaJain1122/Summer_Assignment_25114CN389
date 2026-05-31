#include<stdio.h>
int main(){
    int n,i,lcm;
    printf("enter n");
    scanf("%d",&n);
    lcm=n;
    for(i=1;i<=n;i++){
        if(lcm%i==0 && n%i==0){
            lcm=(lcm*i)/i;
        }
    }
    printf("LCM of %d is %d",n,lcm);
    return 0;
}