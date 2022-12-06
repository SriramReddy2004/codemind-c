#include<stdio.h>
int isPrime(int n);
int main(){
    
    int n,k;
    scanf("%d",&n);
    k=isPrime(n);
    if(k==1) printf("prime");
    else printf("not a prime");
    return 0;
}
int isPrime(int n){
    int i;
    for(i=2;i<=n;i++) if(n%i==0) break;
    int d=(i==n)?1:0;
    return d;
}