#include<stdio.h>
int main(){
    int n,p,x;
    scanf("%d",&n);
    int l[n];
    for(x=0;x<n;x++) scanf("%d",&l[x]);
    scanf("%d",&p);
    p%=n;
    for(x=0;x<n;x++) printf("%d ",l[(n-p+x)%n]);
}

