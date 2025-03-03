#include <stdio.h>
int main() {
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
	int freq[n][2];
	int c=0;
	for (int i=0; i<n; i++){
		int f=0;
		for(int j=0; j<c; j++){
			if (freq[j][0]==l[i]){
				freq[j][1]+=1;
				f=1;
				break;
			}

		}
		if (!f){
		freq[c][0]=l[i];
		freq[c][1]=1;
		c++;}
	}
	for(int i=0; i<c; i++){
		printf("%d ",freq[i][1]);
	}
   return 0;
}
