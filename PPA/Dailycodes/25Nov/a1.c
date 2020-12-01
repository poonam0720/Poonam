#include<stdio.h>

int a = 10, b = 20;

void main() {

     printf("%d %d\n",a,b);  //10 20
     int a = 30, b = 40;
     {
          printf("%d %d\n",a,b);  // 30 40
          int a = 50, b = 60;
          {
             printf("%d %d\n",a,b);  // 50 60
          
          }
          
     }
}

/*

10 20
30 40
50 60


*/
