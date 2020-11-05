#include<stdio.h>

struct Result {

     int noOfsub;
     float per;
     char grade;
};

void main()  {

     struct Result r1 = {5, 80.45, 'A'};
     struct Result r2 = {5, 65.05, 'B'};
     struct Result r3 = {5, 40.00, 'C'};
     
     if((r1.noOfsub == r2.noOfsub == r3.noOfsub) && (r1.per == r2.per == r3.per) && (r1.grade == r2.grade == r3.grade)) {
     
            printf("Objects are equal.\n");
     }
     else{
     
            printf("Objects are not equal.\n");
     }
}

/*
Objects are not equal.

*/
