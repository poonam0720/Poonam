//comparing one object to another object
#include<stdio.h>

struct company {

     char* cname;
     //char cname[8];
     int numEmp;
};

void main() {

     struct company cmp1 = {"Biencaps", 35};
     struct company cmp2 = {"Biencaps", 35};
     
     printf("%d\n",(cmp1.cname == cmp2.cname));  //1
     printf("%d\n",(cmp1.numEmp == cmp2.numEmp));  //1
     
     if((cmp1.cname == cmp2.cname) && (cmp1.numEmp == cmp2.numEmp))   {
     
         printf("Both objects are same.\n");  // true
     }
     else{
     
           printf("Both objects are different.\n");
     }
     
}

/*
1
1
Both objects are same.

*/
