#include<stdio.h>
#include<math.h>
int main(){
    
    int n;
    scanf("%d",&n);
    if(sqrt(n)==floor(sqrt(n))) printf("True");
    else printf("False");
    
    return 0;
}