#include<stdio.h>
int main(){

     static int arr[2] = {0,1};
     
     printf("%d %d\n",arr[-1],arr[3]);
     
     return 0;
}
