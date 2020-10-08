#include<stdio.h>
int main() {

     int x = 10;
     float y = 20.05;
     
     void *vptr = 0;
     vptr = &x;
     
     
     printf("%d\n",*(int*)vptr);  //10
     
   //  printf("%ld\n",sizeof(vptr));//8
     
     
     return 0;
}

/*

10
*/s
