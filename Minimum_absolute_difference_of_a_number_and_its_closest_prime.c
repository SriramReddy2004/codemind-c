#include<stdio.h>
#include<math.h>

int main(){
    
    int n,t,i,pre,post,near;
    scanf("%d",&n);
    t=n;
    for(i=t;;i--){
        if(i!=1&&((i==2 | i==3 | i==5 | i==7)|(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0))){
            pre=i;
            break;
        }
    }
    for(i=t;;i++){
        if(i!=1&&((i==2 | i==3 | i==5 | i==7)|(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0))){
            post=i;
            break;
        }
    }
    if((n-pre)<(post-n)) near=pre;
    else if((n-pre)==(post-n)) near=pre;
    else if((n-pre)>(post-n)) near=post;
    else near=n;
    printf("%d",abs(n-near));
    
    return 0;
}