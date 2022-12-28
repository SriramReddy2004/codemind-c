#include<stdio.h>

int main(){

    int n,i,a,b,t=0,max;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d %d",&a,&b);
    if(a>b){
        a*=b;
        b=a/b;
        a/=b;
    }
    for(i=0;i<n;i++){
        if(arr[i]>=a && arr[i]<=b) continue;
        else{
            if(i==0) max=arr[0];
            else if(arr[i]>max) max=arr[i];
            t++;
        }
    }
    if(t==0) printf("-1");
    else printf("%d",max);
    return 0;
}