#include<stdio.h>
int* reverse(int n,int arr[n],int d, int ans[n]){
	if (d==n){
		return ans;
	}
	ans[d]=arr[n-d-1];
	return reverse(n,arr,d+1,ans);
}
int main(){
    int n;
    scanf("%d",&n);
    int l[n];
   for (int i=0;i<n;i++){
	    scanf("%d",&l[i]);
    }
    int g[n];
    reverse(n,l,0,g);
    for(int i=0;i<n;i++){
	    printf("%d ",g[i]);

    }
    return 0;

}

