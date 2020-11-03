//cutomize func
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
      
      
      //return ret;
      
      /*if(ret == 0)  {
      
          printf("Strings are equal.\n");
      }
      
      else{
      
         printf("Strings are not equal.\n"); 
      }*/
      
      if(ret == 0)  {
      
          printf("Strings are equal.\n");
      }
      
}

int main() {

     char *str1 = "Bollywood";
     char *str2 = "Bollywood";
     
     mystrcmp(str1,str2);
     
    
}

