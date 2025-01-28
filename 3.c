#include<stdio.h>
int main(){
    float fah;
    scanf("%f", &fah);
    float cel = (fah-32)*5.0/9.0;
    printf("%f\n", cel);
    return 0;
}