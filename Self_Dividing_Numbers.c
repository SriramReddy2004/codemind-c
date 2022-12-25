#include<stdio.h>
#include<math.h>

int main(){
    
    int r,a,t,b,d,i,c=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        d=log10(i)+1;
        c=0;
        t=i;
        while(t){
            r=t%10;
            if(r==0) break;
            else if(i%r==0) c++;
            t/=10;
        }
        if(c==d) printf("%d ",i);
    }
    return 0;
}