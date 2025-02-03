#include<stdio.h>
int main(){
    int month, day;
    scanf("%d %d", &day, &month);
    switch(month){
        case 1:
            if(day >= 1 && day <= 19){
                printf("Capricorn");
            }else if(day >= 20 && day <= 31){
                printf("Aquarius");
            }else{
                printf("Invalid date");
            }
            break;
        case 2:
            if(day >= 1 && day <= 18){
                printf("Aquarius");
            }else if(day >= 19 && day <= 29){
                printf("Pisces");
            }else{
                printf("Invalid date");
            }
            break;
        case 3:
            if(day >= 1 && day <= 20){
                printf("Pisces");
            }else if(day >= 21 && day <= 31){
                printf("Aries");
            }else{
                printf("Invalid date");
            }
            break;
        case 4:
            if(day >= 1 && day <= 19){
                printf("Aries");
            }else if(day >= 20 && day <= 30){
                printf("Taurus");
            }else{
                printf("Invalid date");
            }
            break;
        case 5:
            if(day >= 1 && day <= 20){
                printf("Taurus");
            }else if(day >= 21 && day <= 31){
                printf("Gemini");
            }else{
                printf("Invalid date");
            }
            break;
        case 6:
            if(day >= 1 && day <= 21){
                printf("Gemini");
            }else if(day >= 22 && day <= 30){
                printf("Cancer");
            }else{
                printf("Invalid date");
            }
            break;
        case 7:
            if(day >= 1 && day <= 22){
                printf("Cancer");
            }else if(day >= 23 && day <= 31){
                printf("Leo");
            }else{
                printf("Invalid date");
            }
            break;
        case 8:
            if(day >= 1 && day <= 22){
                printf("Leo");
            }else if(day >= 23 && day <= 31){
                printf("Virgo");
            }else{
                printf("Invalid date");
            }
            break;
        case 9:
            if(day >= 1 && day <= 22){
                printf("Virgo");
            }else if(day >= 23 && day <= 30){
                printf("Libra");
}
}
}