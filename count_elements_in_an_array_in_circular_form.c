#include<stdio.h>

int main(){
    
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=2;i<n;i++){
        if(((a[i-2])%2==0 && (a[i])%2==1)|((a[i-2])%2==1 && (a[i])%2==0)) c++;
    }
    if(((a[0])%2==0 && (a[n-2])%2==1)|((a[0])%2==1 && (a[n-2])%2==0)) c++;
    if(((a[1])%2==0 && (a[n-1])%2==1)|((a[1])%2==1 && (a[n-1])%2==0)) c++;
    printf("%d",c);
    return 0;
}