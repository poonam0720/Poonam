#include<stdio.h>
int main(){

     int a[] = {10,20,30,40,50,60,70,80,90,100};
     
     int *iptr1 = &a[0];
     
     printf("%d\n",*iptr1);//10
     /*
     iptr1 = iptr1 + 2;
     printf("%d\n",*iptr1);//30
     
     iptr1 = iptr1 + 3;
     printf("%d\n",*iptr1);//60
     
     iptr1 = iptr1 + 1;
     printf("%d\n",*iptr1);//70
     */
     
     iptr1 = iptr1 + 2;
     printf("%p\n",iptr1);//  address
     
     iptr1 = iptr1 + 3;
     printf("%p\n",iptr1);//  address
     
     iptr1 = iptr1 + 1;
     printf("%p\n",iptr1);//  address
     
     return 0;
}
/*
10
0x7ffc74589ae8
0x7ffc74589af4
0x7ffc74589af8


*/
