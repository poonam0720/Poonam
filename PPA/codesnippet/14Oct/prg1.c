#include<stdio.h>
void main () {

     const int arr[] = {1,2,3,4};
     
     int *p;
     
     p = arr + 2;
     
     *p = 6;
     
     printf("%d\n",arr[2]);
}
/*
warning: assignment discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
    8 |      p = arr + 2;
      |        ^


Output = 6

*/
