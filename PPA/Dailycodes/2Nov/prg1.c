//Assigning one object to another object
#include<stdio.h>

struct company {

     char cname[20];
     int numEmp;
};

void main() {

     struct company cmp1 = {"Biencaps", 35};
     struct company cmp2 = cmp1;
     
     cmp2.numEmp = 40;
     struct company cmp3 = cmp2;
     
     printf("Company name = %s and number of Emp = %d\n",cmp1.cname,cmp1.numEmp);
     printf("Company name = %s and number of Emp = %d\n",cmp2.cname,cmp2.numEmp);
     printf("Company name = %s and number of Emp = %d\n",cmp3.cname,cmp3.numEmp);
}
