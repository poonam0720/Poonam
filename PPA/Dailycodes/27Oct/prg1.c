//pointer
#include<stdio.h>
void main()  {

       char *str1 = "core2web";
       char *str2 = "shashi";
       
       printf("%ld\n",sizeof(str1));    //8
       printf("%ld\n",sizeof(str2));     //8
       printf("%ld\n",sizeof("core2web"));  //9
       printf("%ld\n",sizeof("shashi"));   //7
}
