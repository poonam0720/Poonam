#include<stdio.h>
void main()  {

     char name[30], cname[20], designation[30];
     int eid;
     
     printf("Enter id=\n");
     scanf("%d",&eid);
     
     printf("Enter name=\n");
     scanf(" %[^\n]",name);
     
     printf("Enter comapny name=\n");
     scanf(" %[^\n]",cname);
     
     printf("Enter designamtion=\n");
     scanf(" %[^\n]",designation);
     
     
     printf("Employee id = %d\n",eid);
     printf("Employee name = %s\n",name);
     printf("company name = %s\n",cname);
     printf("Designation = %s\n",designation);
     
}

/*

Enter id=
2
Enter name=
Poonam
Enter comapny name=
TCs
Enter designamtion=
Manager
Employee id = 2
Employee name = Poonam
company name = TCs
Designation = Manager

*/
