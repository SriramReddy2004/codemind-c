#include<stdio.h>

int main(){
    
    int n,i,k,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(a[i]==k){
            c++;
            break;
        }
    }
    if(c==0) printf("-1");
    else printf("%d",i);
    return 0;
}