#include<stdio.h>

int main(){

    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<i;j++) printf(" ");
        for(k=1;k<=n;k++){
            if(i==1 || i==n) printf("*");
            else{
                if(k==1 || k==n) printf("*");
                else printf(" ");
            }
        }
        printf("
");
    }
    return 0;
}