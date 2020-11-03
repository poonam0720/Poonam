//customize

#include<stdio.h>
#include<string.h>

int mystrlen(char *str)  {

     int count  = 0;
     while(*str != '\0')  {
     
          str++;
          count++;
     }
     
     return count;
}
void main() {

      char *str1 = "core2webtech";
      char str2[10] = "Bielearn";
      
      printf("%ld\n",strlen(str1));   //12
      printf("%ld\n",strlen(str2));  //8
}
