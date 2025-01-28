#include<stdio.h>
int main(){
    float height;
    scanf("%f", &height);
    float weight;
    scanf("%f", &weight);
    float bmi = weight/(height*height);
    printf("%f\n", bmi);
    return 0;
}