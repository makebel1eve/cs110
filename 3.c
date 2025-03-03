#include <stdio.h>

int check(int m, int n, int arr[m][n]){
	int l=-1;
	for (int i=0;i<m;i++){
		int y=n-1;
		for(int j=0; j<n;j++){
			if (arr[i][j]){
				y=j;
				break;
			}
		}
		if (!((y>l) || ((y==l)&&(l==n-1)))){
			return 0;
		}
		l=y;
	}


		return 1;	
}



int main() {
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	int arr[m][n];
	int a=m,b=n;
	for (int i=0;i<m;i++){
		for(int j=0; j<n;j++){
			int t;
			scanf("%d",&t);
			arr[i][j]=t;
		}
	}
	printf("%d",check(m,n,arr));
	return 0;
}
