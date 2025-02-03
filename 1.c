#include<stdio.h>
int main(){
    int month, day;
    scanf("%d %d", &day, &month);
    switch(month){
        case 1:
            if(day >= 1 && day <= 19){
                printf("Capricorn\n");
            }else if(day >= 20 && day <= 31){
                printf("Aquarius\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 2:
            if(day >= 1 && day <= 18){
                printf("Aquarius\n");
            }else if(day >= 19 && day <= 29){
                printf("Pisces\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 3:
            if(day >= 1 && day <= 20){
                printf("Pisces\n");
            }else if(day >= 21 && day <= 31){
                printf("Aries\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 4:
            if(day >= 1 && day <= 19){
                printf("Aries\n");
            }else if(day >= 20 && day <= 30){
                printf("Taurus\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 5:
            if(day >= 1 && day <= 20){
                printf("Taurus\n");
            }else if(day >= 21 && day <= 31){
                printf("Gemini\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 6:
            if(day >= 1 && day <= 21){
                printf("Gemini\n");
            }else if(day >= 22 && day <= 30){
                printf("Cancer\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 7:
            if(day >= 1 && day <= 22){
                printf("Cancer\n");
            }else if(day >= 23 && day <= 31){
                printf("Leo\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 8:
            if(day >= 1 && day <= 22){
                printf("Leo\n");
            }else if(day >= 23 && day <= 31){
                printf("Virgo\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 9:
            if(day >= 1 && day <= 22){
                printf("Virgo\n");
            }else if(day >= 23 && day <= 30){
                printf("Libra\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 10:
            if(day >= 1 && day <= 22){
                printf("Libra\n");
            }else if(day >= 23 && day <= 31){
                printf("Scorpio\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 11:
            if(day >= 1 && day <= 21){
                printf("Scorpio\n");
            }else if(day >= 22 && day <= 30){
                printf("Sagittarius\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        case 12:
            if(day >= 1 && day <= 21){
                printf("Sagittarius\n");
            }else if(day >= 22 && day <= 31){
                printf("Capricorn\n");
            }else{
                printf("Invalid date\n");
            }
            break;
        default:
            printf("Invalid month\n");
            break;
    }
    return 0;
}
