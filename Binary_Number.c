#include<stdio.h>
#include<math.h>

int main(){
    
    int n,i,j,t;
    scanf("%d",&n);
    int a[n];
    for(j=0;j<pow(2,n);j++){
        t=j;
        for(i=n-1;i>=0;i--){
            a[i]=t%2;
            t/=2;
        }
    for(i=0;i<n;i++) printf("%d",a[i]);
    printf("
");
    }
    
    return 0;
}