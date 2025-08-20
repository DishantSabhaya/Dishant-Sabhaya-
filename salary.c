#include<stdio.h>
#include<conio.h>
void main(){
float gross_salary,allowances,deductions, net_salary;
printf("enter the gross salary\n");
scanf("%f", &gross_salary);
if(gross_salary>10000){
        allowances =0.10*gross_salary;
    deductions=0.03*gross_salary;
}else
if (gross_salary>5000){
        allowances=0.07*gross_salary;
       deductions=0.02*gross_salary;
}
 net_salary=gross_salary+allowances-deductions;
printf("net_salary = %f\n");
}
