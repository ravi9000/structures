#include<stdio.h>
#include<string.h>
struct employee
{
char e_name[32];
unsigned int e_id;
float e_salary;
char e_gender;
char e_grade;
};
main()  
{
struct employee e;
strcpy(e.e_name,"arjun"),
e.e_id=1;
e.e_salary=18000;
e.e_gender='m';
e.e_grade='s';
printf("%p-%s\n",e.e_name,e.e_name);
printf("%p-%d\n",&e.e_id,e.e_id);
printf("%p-%f\n",&e.e_salary,e.e_salary);
printf("%p-%c\n",&e.e_gender,e.e_gender);
printf("%p-%c\n",&e.e_grade,e.e_grade);
}

 
