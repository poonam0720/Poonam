#include<stdio.h>
int main(){

     int year,roll_no,backlogs;
     char ch='y';
     float CGPA;
     
     printf("Enter year=\n");
     scanf("%d",&year);
     
     printf("Enter roll no=\n");
     scanf("%d",&roll_no);
     
     printf("Do you have backlog=\n");
     scanf(" %c",&ch);
     
     if(ch == 'y' || ch == 'Y'){
     
        printf("Enter number of backlogs=\n");
        scanf("%d",&backlogs);
     }
     
     
     printf("Enter CGPA=\n");
     scanf("%f",&CGPA);
     
     int *yptr = &year;
     int *rptr = &roll_no;
     int *bptr = &backlogs;
     float *fptr = &CGPA;
     
     printf("Year=%d\n",*yptr);
     printf("Roll of=%d\n",*rptr);
     printf("Backlog=%d\n",*bptr);
     printf("CGPA=%.2f\n",*fptr);
     
     return 0;
}
/*
Enter year=
2
Enter roll no=
54
Do you have backlog=
y
Enter number of backlogs=
1
Enter CGPA=
80.87
Year=2
Roll of=54
Backlog=1
CGPA=80.87

*/
