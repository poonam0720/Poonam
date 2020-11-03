//customize 

#include<stdio.h>

char* mystrcpy(char *des, char *src) {


      while(*src != '\0')   {
      
      
          *des = *src;
          *des++;
          *src++;
      }
      
      *des = '\0';
      return des;
}

void main()  {

      char *str1 = "Bielearn";
      char str2[20];
      
      puts(str1);   //Bielearn
      puts(str2);    //Bielearn
      
      mystrcpy(str2,str1);
      
      puts(str1);   //Bielearn
      puts(str2);   //Bielearn
}

