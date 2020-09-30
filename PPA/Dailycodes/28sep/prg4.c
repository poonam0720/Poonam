#include<stdio.h>
int main(){

     int a[] = {10,20,30,40,50};
     
     float b[] = {10.5,20.5,30.5,40.5,50.5};
     
     char c[] = {'A','B','C','D','E'};
     
     double d[] = {20.08,30.05,54.76,67.54};
     
     //array
     printf("%p\n",a);
     printf("%p\n",b);
     printf("%p\n",c);
     printf("%p\n",d);
     
     
     //gate
     printf("%p\n",&a);
     printf("%p\n",&b);
     printf("%p\n",&c);
     printf("%p\n",&d);
     
     return 0;
}
