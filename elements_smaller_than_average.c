#include<stdio.h>

int main(){
    
    int n,i,c=0;
    scanf("%d",&n);
    float a[n],avg=0;
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        avg+=a[i];
    }
    avg/=n;
    for(i=0;i<n;i++) if(a[i]<=avg) c++;
    printf("%d",c);
    
    return 0;
}