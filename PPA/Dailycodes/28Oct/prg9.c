#include<stdio.h>

char* mystrcat(char *src, char *des) {

    while(*src != '\0')  {
    
        src++;
    }
    
    while(*des != '\0')  {
    
        *src = *des;
        src++;
        des++;
    }
    
    *src = '\0';
    
    return src;
}


void main()  {

      char str1[20] = "Poonam";
      char str2[20] = "Patil";
      
      puts(str1);   //Poonam
      puts(str2);  //Patil
      
      mystrcat(str1,str2);
      
      puts(str1);//Poonam
      puts(str2);   //Patil
}
/*

Poonam
Patil
PoonamPatil
Patil

*/
