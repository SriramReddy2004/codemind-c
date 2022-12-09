#include<stdio.h>
#include<math.h>

int main(){

    int n,i=0,j,count=0,d;
    scanf("%d",&n);
    d=log10(n)+1;
    int a[d];
    while(n){
        a[i++]=n%10;
        n/=10;
    }
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            if(i!=j && a[i]==a[j]) count++;
        }
        if(count>0) break;
    }
    if(count==0) printf("Unique Number");
    else printf("Not Unique Number");

    return 0;
}