#include<stdio.h>

int main(){

float principle,Time,Rate, compound_interest;
// Accepting user input
printf("enter principle amount,\n");
scanf("%f",&principle);

printf("enter time(in years):,\n");
scanf("%f",&Time);

printf("enter Rate in interest:,\n");
scanf("%f",&Rate);

//calculating simple interest 
compound_interest=principle*((1+Rate/100)*Time);

//display results 
printf("The compound interest is:%.2f\n", compound_interest);

 return 0;
}