#include<stdio.h>
int main(){

     int core2web[] = {1,2,3,4,5};
     
     core2web++;
     
     printf("%d\n",core2web[0]);
     
     return 0;
}

/*
 error: lvalue required
 */
