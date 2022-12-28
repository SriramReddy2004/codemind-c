#include<stdio.h>
#include<math.h>

int main(){
    
    int n,i,c=0;
    scanf("%d",&n);
    int avg=0,a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        avg+=a[i];
    }
    avg/=n;
    for(i=0;i<n;i++) if(a[i]>=avg) c++;
    printf("%d",c);
    
    return 0;
}