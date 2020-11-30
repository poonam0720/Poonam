
#include<stdio.h>

char* mystrcmp(char *src, char *des)  {

      int ret = 0;
      
      while(*src != '\0' || *des != '\0')  {
      
          if(*src == *des)  {
          
             src++;
             des++;          
          }
          
          else if(*src != *des || (*src == '\0' && *des != '\0') || (*src != '\0' && *des == '\0')) {
          
              ret = 1;
              printf("Strings are not equal.\n"); 
              break;
          }
      }
      

      
      if(ret == 0)  {
      
          printf("Strings are equal.\n");
      }
      
}

int main() {

     char *str1 = "Core2web";
     char *str2 = "Core2web";
     
     mystrcmp(str1,str2);
     
    
}

/*
Strings are equal.

*/
