#include<stdio.h>

void main()  {

      char str[20];
      
      printf("Enter string=\n");
      
      fgets(str, 12, stdin);
      
      printf("String entered by you is: %s",str);
}

/*
Enter string=
My name is
String entered by you is: My name is

*/
