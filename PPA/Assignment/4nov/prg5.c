#include<stdio.h>

long mySpaceLen(char *str)  {

       int count = 0;
       while(*str == ' ') {
       
           str++;
           count++;
       }
       
       
}

void main()   {

      char *str1 = "India is my";
     
      printf("%ld\n",mySpaceLen(str1));
}

/*
10

*/
