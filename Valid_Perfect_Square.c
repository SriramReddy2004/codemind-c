#include<stdio.h>
#include<math.h>

int main(){
    
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(sqrt(a[i])==floor(sqrt(a[i]))) printf("True
");
        else printf("False
");
    }
    
    
    return 0;
}