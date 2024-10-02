//program to get simple interest

#include<stdio.h>
int main(){
float principal,rate,time,interest;
//take user input for principal,rate and time
printf("enter principal amount");
scanf("%f",&principal);
printf("enter rate");
scanf("%f",&rate);
printf("enter time period(in years)");
scanf("%f",&time);
//calculate simple interest
interest=(principal*rate*time)/100;
//show results
printf("simple interest is%f\n",interest);

return 0;
}
    