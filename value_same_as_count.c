#include<stdio.h>

int main(){
    
    int j,i,n,c,p=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
                if(j!=i) a[j]=0;
            }
        }
        if(c==a[i]){
            p++;
        }
    }printf("%d",p);
    
    return 0;
}