#include<stdio.h>
int main(){

     char ch = 'P';
     int val = 10;
     float f = 20.5;
     double d = 38.50;
     
     char *cptr = &ch;
     int *iptr = &val;
     float *fptr = &f;
     double *dptr = &d;
     
     printf("%ld\n",sizeof(ch));//1
     printf("%ld\n",sizeof(val));//4
     printf("%ld\n",sizeof(f));//4
     printf("%ld\n",sizeof(d));//8
     
     printf("%ld\n",sizeof(cptr));//8
     printf("%ld\n",sizeof(iptr));//8
     printf("%ld\n",sizeof(fptr));//8
     printf("%ld\n",sizeof(dptr));//8
     
     return 0;
}
/*
1
4
4
8
8
8
8
8

*/
