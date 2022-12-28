#include<stdio.h>
#include<math.h>

int main(){

    int n,pre,post,near;
    scanf("%d",&n);
    pre=pow(2,(floor(log2(n))));
    post=pre*2;
    if((n-pre)<(post-n)) near=pre;
    else near=post;
    printf("%d",abs(n-near));

    return 0;
}