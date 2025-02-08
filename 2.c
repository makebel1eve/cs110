#include <stdio.h>
#include<stdbool.h>
int factorial(int n){
    if (n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main() {
    int v[] = {1,1,2,6,24,120,720,5040,40320,362880};
    int n;

    scanf("%d", &n);
    if (n<0){
        printf("Invalid input\n");
        return 0;
    }
    int cx=n;
    int check=0;
    while (n){
        check+=factorial(n%10);
        n/=10;
    }
    if (cx==check){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    
    

}