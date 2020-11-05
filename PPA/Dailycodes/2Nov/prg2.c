#include<stdio.h>

struct company {

     char cname[20];
     int numEmp;
};

void main() {

     struct company cmp1 = {"Biencaps", 35};
     struct company cmp2 = {"Biencaps", 35};
     
     if(cmp1 == cmp2) {
     
         printf("Both objects are same.\n");
     }
     else{
     
           printf("Both objects are different.\n");
     }
     
}

/*
prg2.c: In function ‘main’:
prg2.c:14:14: error: invalid operands to binary == (have ‘struct company’ and ‘struct company’)
   14 |      if(cmp1 == cmp2) {
      |              ^~


In structure objects cannot be compare

*/
