//using array
#include<stdio.h>
void main()  {

       char str1[] = {'c','o','r','e','2','w','e','b'};
       char str2[] = {'s','h','a','s','h','i'};
       
       printf("%ld\n",sizeof(str1));    //9
       printf("%ld\n",sizeof(str2));     //7
       printf("%ld\n",sizeof("core2web"));  //9
       printf("%ld\n",sizeof("shashi"));   //7
}
