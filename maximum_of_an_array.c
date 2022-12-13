#include<stdio.h>

int main(){
    
    int n,i,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i==0) max=a[0];
        else if(a[i]>max) max=a[i];
    }
    printf("%d",max);
    
    return 0;
}