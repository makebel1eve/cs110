#include <stdio.h>

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int ans=0;

    while (1){
        int n;
        scanf("%d", &n);
        if (n==-1){
            break;
        }
        if (isPrime(n)){
            ans+=1;
        }

    }
    printf("%d\n", ans);
    return 0;
}
