#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    bool term=false;
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
