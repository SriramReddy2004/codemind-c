#include<stdio.h>

int main(){
    
    int n,i,c=0,ec=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2==1 && a[i]%2==1) ec++;
        if(a[i]%2==1) c++;
    }
    if(c==ec) printf("True");
    else printf("False");
    
    return 0;
}