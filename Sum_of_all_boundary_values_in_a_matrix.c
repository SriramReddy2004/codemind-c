#include<stdio.h>
int main(){
    int r,c,sum=0,i,j;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            if(i==0 | i==r-1) sum+=a[i][j];
            else if(j==0 | j==c-1) sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}