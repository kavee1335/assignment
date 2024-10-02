//variables and data types
//processor directive scanf(),printed()
#include<stdio.h>
int main(){
char a;
char name;
int age;
float salary;
double budget;
printf("enter character");
scanf("%c",&a);
printf("the character is%c\n",a);
printf("enter name");
scanf("%c",&name);
printf("the name is%c\n",name);
printf("enter age");
scanf("%d",&age);
printf("the age is%d\n",age);
printf("enter salary");
scanf("%f",&salary);
printf("the salary is%f\n", salary);
printf("enter budget");
scanf("%lf",&budget);
printf("the budget is%lf\n",budget);
return 0;
}