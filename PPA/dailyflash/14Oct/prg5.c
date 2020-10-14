#include<stdio.h>
int main() {

     int eid,NumberOfDaysWorked;
     float sal;
     
     void *vptr1 = &eid;
     void *vptr2 = &NumberOfDaysWorked;
     void *vptr3 = &sal;
     
     printf("Enter employee id:\n");
     scanf("%d",&eid);
     
     printf("Enter salary:\n");
     scanf("%f",&sal);
     
     printf("Enter number days worked in the office:\n");
     scanf("%d",&NumberOfDaysWorked);
     
     printf("Employee details:\n");
     
     printf("Employee id = %d\n",*(int*)vptr1);
     
     printf("Employee salary = %f rupees\n",*(float*)vptr3);
     
     printf("Number of days worked in office = %d days\n",*(int*)vptr2);
     
     return 0;
     
}

/*
Enter employee id:
3
Enter salary:
50000
Enter number days worked in the office:
300
Employee details:
Employee id = 3
Employee salary = 50000.000000 rupees
Number of days worked in office = 300 days


*/
