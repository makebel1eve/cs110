#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n==0){
        printf("0\n");
        return 0;
    }
    if (n%2 & n>0){
        int ans;
        ans=n-n/2;
        printf("%d\n", ans);
    }
    else if (!n%2 & n>0){
        int ans;
        ans=-n/2;
        printf("%d\n", ans);
    }
    else{
        printf("Invalid input\n");
    }
}