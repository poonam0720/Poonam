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
     
     printf("%c\n",ch);//P
     printf("%p\n",cptr);//Address
     printf("%c\n",*cptr);//value(cptr) => P
     
     printf("%d\n",val);//10
     printf("%p\n",iptr);//Address
     printf("%d\n",*iptr);//Value(iptr) => 10
     
     printf("%f\n",f);//20.500
     printf("%p\n",fptr);//Address
     printf("%f\n",*fptr);//value(fptr) => 20.5
     
     printf("%lf\n",d);//38.50
     printf("%p\n",dptr);//Address
     printf("%lf\n",*dptr);//Value(dptr) => 38.50
     
     return 0;
}
/*
P
0x7ffec34af7f7
P
10
0x7ffec34af7f8
10
20.500000
0x7ffec34af7fc
20.500000
38.500000
0x7ffec34af800
38.500000

*/
