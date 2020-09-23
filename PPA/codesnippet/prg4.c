#include<stdio.h>
int main(){

     int arr[5], i=0;
     
     while(i<5)
         arr[i] = ++i;
         
     for(i=0;i<4;i++)
         printf("%d, ",arr[i]);
         
     return 0;
}

/*

0,1,2,3
*/
