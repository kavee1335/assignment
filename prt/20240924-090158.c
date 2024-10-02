//program to get compound interest
#include<stdio.h>
int main(){

//initialize variables for prinpal amount,interest,time
//number of compounding periods, compound interest (CI) and final amount (A)
double principal,rate, time,n,CI,A;
printf("enter principal amount");

//prompt the user to enter annual interest rate in percentage 
printf("enter annual interest rate eg for 3% enter3");
scanf("%lf",&rate);

//convert the entered interest rate to decimal 
rate=rate/100;
//prompt the user to enter time in years
printf("enter the time in years");
scanf("%lf",&time);

//prompt the user to enter the number of times that interest is compounded annualy 
printf("enter the number of times interest is compounded annualy");
scanf("%lf",&n);
//calculate the amount after time (t) with compound interest
A=principal*pow((1+rate/n),n*time);
//calculate the compound interest by subtracting principal from amount
CI=A-principal;
//print the compound interest
printf("the compound interest is %lf\n",CI);
return 0;
}