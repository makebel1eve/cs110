#include<stdio.h>
int main(){
    float cel;
    scanf("%f", &cel);
    float fah = (cel*9.0/5.0)+32;
    printf("%f\n", fah);
    return 0;
}