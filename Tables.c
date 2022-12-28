#include<stdio.h>

int main(){
    
    int n,i,s;
    scanf("%d %d",&n,&s);
    for(i=1;i<=s;i++){
        if(i%2!=0) printf("%d x %d = %d
",n,i,n*i);
    }
    
    return 0;
}