#include<stdio.h>

int main(){
    
    int j,i,n,c,p=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
                if(j!=i) a[j]=0;
            }
        }
        if(c==k && a[i]!=0){
            printf("%d ",a[i]);
            p++;
        }
    }
    if(p==0) printf("%d",-1);
    
    return 0;
}