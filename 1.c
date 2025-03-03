#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int l[n];
	int x=n;
	while(x){
		int t;
		scanf("%d",&t);
		l[n-x]=t;
		x--;
	}
	int pos;
	scanf("%d",&pos);
	pos=pos%n;
	for(int i=0;i<n;i++){
		printf("%d ",l[(n-pos+i)%n]);
	}
	return 0;
}
