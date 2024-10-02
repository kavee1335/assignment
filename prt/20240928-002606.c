#include<stdio.h>
int main()
{
//declaring initialization
int age;
float income;

printf("enter customers age");
scanf("%d",&age);
printf("enter customers income");
scanf("%f",&income);
if("age>=21,&income>=21000")
printf("congratulations you qualify for the loan\n");
else
printf("unfortunately we are unable to offer a loan at this time\n");
return 0;
}