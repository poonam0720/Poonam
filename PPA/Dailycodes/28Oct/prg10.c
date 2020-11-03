#include<stdio.h>
#include<string.h>

void main() {

     char *str1 = "Bollywood";
     char *str2 = "Bollywood";
     
     int ret = strcmp(str1,str2);
     
     if(ret == 0) {
     
         printf("Strings are same.\n");
     }
     else{
     
         printf("Strings are not equal.\n");
     }
}

/*
Strings are same.

*/
