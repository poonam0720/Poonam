#include<stdio.h>

void main()  {

      char* str1[4] = {"Ram", "Amar", "Aman", "John"};
      
      char str2[4][10] = {"Java", "Python", "C", "c++"};
      
      for(int i = 0; i < 4 ; i++) {
      
           printf("%s\n",*(str1+i));
           printf("%s\n",*(str2+i));
      }
}

/*

Ram
Java
Amar
Python
Aman
C
John
c++


*/
