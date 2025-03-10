#include<stdio.h>
void hailstoneSequence(int *num,int *steps){
	printf("%d ",*num);
	if(*num==1) return;
	if(*num%2==0){
		*num/=2;
		(*steps)++;
		hailstoneSequence(num,steps);
	}
	else{
		*num=3*(*num)+1;
		(*steps)++;
		hailstoneSequence(num,steps);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int steps=0;
	hailstoneSequence(&n,&steps);
	printf("\n%d",steps);
	return 0;
}
