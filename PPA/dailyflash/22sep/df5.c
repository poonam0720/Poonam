#include<stdio.h>
int main(){

     int eid,e_age,e_sal;
     
     printf("Enter empolyee details=\n");
     printf("Enter employee id=\n");
     scanf("%d",&eid);
     printf("Enter employee age=\n");
     scanf("%d",&e_age);
     printf("Enter employee salary=\n");
     scanf("%d",&e_sal);
     
     int *ptr1 = &eid;
     int *ptr2 = &e_age;
     int *ptr3 = &e_sal;
     
     printf("Empolyee id=%d\n",*ptr1);
     printf("Empolyee age=%d\n",*ptr2);
     printf("Empolyee salary=%d\n",*ptr3);
     
     return 0;
     
}
/*
Enter empolyee details=
Enter employee id=
234
Enter employee age=
30
Enter employee salary=
40000
Empolyee id=234
Empolyee age=30
Empolyee salary=40000

*/
