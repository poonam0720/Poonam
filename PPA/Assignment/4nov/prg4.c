#include<stdio.h>

long myStringLen(char *str)  {

       int count = 0;
       while(*str != '\n') {
       
           str++;
           count++;
       }
       
       
}

void main()   {

      char *str1 = "India is my";
      
     // printf("Enter string=\n");
      
     // fgets(str1, 11, stdin);
      
      printf("%ld\n",myStringLen(str1));
}

/*
10

*/
