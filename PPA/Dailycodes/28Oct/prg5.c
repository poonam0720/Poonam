//strcpy   = library func

#include<stdio.h>
#include<string.h>

void main()  {

     char *str1 = "Bielearn";
     char str2[20];
     
     
     //before
     
     puts(str1);  // Bielearn
     puts(str2);  // Bielearn
     
     strcpy(str2, str1);
     
     //after
     
     puts(str1);   // Bielearn
     puts(str2);   // Bielearn
}


/*
Bielearn
      blank space we have not initialize str2(array)
Bielearn
Bielearn


*/
