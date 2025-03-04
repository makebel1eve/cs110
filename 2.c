#include<stdio.h>
int main(){
    int n,x,c=0;
    scanf("%d",&n);
    int l[n],f[n][2];
    for(x=0;x<n;) scanf("%d",&l[x++]);
    for(x=0;x<n;x++){
        int j=0;
        for(;j<c&&f[j][0]-l[x];j++);
        j<c?f[j][1]++:(f[c][0]=l[x],f[c++][1]=1);
    }
    for(x=0;x<c;) printf("%d ",f[x++][1]);
}
