#include<stdio.h>

struct student {

     int studid;
     char sname[20];
     char grade;
     char mail[30];     
};

void main() {

     struct student s1 = {1, "Amar", 'A', "Amar1@gmail.com"};
     struct student s2 = {2, "Aman", 'B', "Aman2@gmail.com"};
     
     struct student *ptr1 = &s1;
     struct student *ptr2 = &s2;
     
     printf("Student id = %d  Student name = %s   Grade = %c    Mail = %s \n",ptr1->studid, ptr1->sname, ptr1->grade, ptr1->mail);
     printf("Student id = %d  Student name = %s   Grade = %c    Mail = %s \n",ptr2->studid, ptr2->sname, ptr2->grade, ptr2->mail);
}

/*

Student id = 1  Student name = Amar   Grade = A    Mail = Amar1@gmail.com 
Student id = 2  Student name = Aman   Grade = B    Mail = Aman2@gmail.com 


*/
