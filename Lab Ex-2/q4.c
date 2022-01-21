#include <stdio.h>
#include <conio.h>
int main()
{
    int day, month;
    printf("Enter the day of birth(1 to 31): ");
    scanf("%d", &day);
    printf("Enter the month of birth(1 to 12): ");
    scanf("%d", &month);

    // for Capricorn
    if (month == 12 && day >= 22 && day <= 31 || month == 1 && day <= 19 && day > 0){
        printf("Your Zodiac Sign is Capricorn.");}
    // for Aquarius
    else if (month == 1 && day >= 20 && day <= 31 || month == 2 && day <= 17 && day > 0){
        printf("Your Zodiac Sign is Aquarius.");}
    // for Pisces
    else if (month == 2 && day >= 18 && day <= 29 || month == 3 && day <= 19 && day > 0){
        printf("Your Zodiac Sign is Pisces.");}
    // for Aries
    else if (month == 3 && day >= 20 && day <= 31 || month == 4 && day <= 19 && day > 0){
        printf("Your Zodiac Sign is Aries.");}
    // for Taurus
    else if (month == 4 && day >= 20 && day <= 30 || month == 5 && day <= 20 && day > 0){
        printf("Your Zodiac Sign is Taurus.");}
    // for Gemini
    else if (month == 5 && day >= 21 && day <= 31 || month == 6 && day <= 20 && day > 0){
        printf("Your Zodiac Sign is Gemini.");}
    // For Cancer
    else if (month == 6 && day >= 21 && day <= 30 || month == 7 && day <= 22 && day > 0){
        printf("Your Zodiac Sign is Cancer.");}
    // for Leo
    else if (month == 7 && day >= 23 && day <= 31 || month == 8 && day <= 22 && day > 0){
        printf("Your Zodiac Sign is Leo.");}
    // for Virgo
    else if (month == 8 && day >= 23 && day <= 31 || month == 9 && day <= 22 && day > 0){
        printf("Your Zodiac Sign is Virgo.");}
    // for Libra
    else if (month == 9 && day >= 23 && day <= 30 || month == 10 && day <= 22 && day > 0){
        printf("Your Zodiac Sign is Libra.");}
    // for Scorpio
    else if (month == 10 && day >= 23 && day <= 31 || month == 11 && day <= 21 && day > 0){
        printf("Your Zodiac Sign is Scorpio.");}
    // for Sagittarius
    else if (month == 11 && day >= 22 && day <= 30 || month == 12 && day <= 21 && day > 0){
        printf("Your Zodiac Sign is Sagittarius.");}
}