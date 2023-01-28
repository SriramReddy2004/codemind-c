#include<stdio.h>
#include<math.h>
int main(){
    
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<=sqrt(n);i++){
        for(j=0;j<=sqrt(n);j++){
            if(n==((i*i)+(j*j))){
                c++;
                break;
            }
        }
        if(c==1)  break;
    }
    if(c==1) printf("True");
    else printf("False");
    
    return 0;
}