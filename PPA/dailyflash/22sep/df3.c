#include<stdio.h>
int main(){

     int a=10;
     char ch='A';
     float x=20.5;
     double y=30.20;
     
     int *iptr=&a;
     char *cptr=&ch;
     float *fptr=&x;
     double *dptr=&y;
     
     printf("Address of variables=\n");
     
     printf("%p\n",iptr);
     printf("%p\n",cptr);
     printf("%p\n",fptr);
     printf("%p\n",dptr);
     
     printf("\nAddress of pointer=\n");
     
     printf("%p\n",&iptr);
     printf("%p\n",&cptr);
     printf("%p\n",&fptr);
     printf("%p\n",&dptr);
     
     printf("\nValue of variables=\n");
     
     printf("%d\n",*iptr);
     printf("%c\n",*cptr);
     printf("%f\n",*fptr);
     printf("%lf\n",*dptr);
     
     return 0;
}

/*
Address of variables=
0x7ffeafe64ed8
0x7ffeafe64ed7
0x7ffeafe64edc
0x7ffeafe64ee0

Address of pointer=
0x7ffeafe64ee8
0x7ffeafe64ef0
0x7ffeafe64ef8
0x7ffeafe64f00

Value of variables=
10
A
20.500000
30.200000


*/
