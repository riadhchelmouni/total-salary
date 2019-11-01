#include<stdio.h>
#include<math.h>

int main()

{

float basic_salary,d,da,ded,hra,salary_amount,h,x1,x2;

printf("Enter the basic_salary:");

scanf("%f",&basic_salary);

printf("Enter the D :");

scanf("%f",&d);

printf ("Enter the H : ");

scanf("%f",&h);

printf("Enter the DED : ");

scanf("%f",&ded);

da=basic_salary*(d/100);

hra=basic_salary*(h/100);

x1=basic_salary+da+hra;

x2=x1*(ded/100);

salary_amount=x1-x2;

printf("The Total salary = %f\n",salary_amount);

return 0;

}
