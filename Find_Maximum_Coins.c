#include<stdio.h>

int main(){

    int n,m,i,j,k,l,max=0,sum;
    scanf("%d %d",&n,&m);
    int a[n][n];
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(i=0;i<=n-m;i++){
        for(j=0;j<=n-m;j++){
                sum=0;
            for(k=i;k<i+m;k++){
                for(l=j;l<j+m;l++) sum+=a[k][l];
            }
        if(max<sum) max=sum;
        }
    }
    printf("%d",max);

    return 0;
}