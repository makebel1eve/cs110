
#include<stdio.h>

int check(int m, int n, int arr[m][n]){
    int l=-1,y;
    for(int i=0;i<m;l=y,i++){
        for(y=0;y<n&& !arr[i][y];y++);
        if(y<=l) return 0;
    }
    return 1;
}

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d",&arr[i][j]);
    printf("%d",check(m,n,arr));
}

