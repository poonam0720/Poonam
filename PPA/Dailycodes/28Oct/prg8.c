

#include<stdio.h>
#include<string.h>

void main()  {

      char str1[20] = "core2web";
      char str2[20] = "technologies";
      
      puts(str1);   //core2web
      puts(str2);  //technologies
      
      strcat(str1,str2);
      
          puts(str1);//core2webtechnologies
      puts(str2);   //technologies
}

/*
core2web
technologies
core2webtechnologies
technologies


*/
