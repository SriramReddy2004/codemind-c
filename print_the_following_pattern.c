#include<stdio.h>

int main(){

    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<n-i+1;j++) printf(" ");
        for(j=i-1;j>=1;j--) printf("%d",j);
        printf("0");
        for(j=1;j<i;j++) printf("%d",j);
        printf("
");
    }

    return 0;
}