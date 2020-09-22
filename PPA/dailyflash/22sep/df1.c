#include<stdio.h>
int main(){

      int a=10;
      char ch='A';
      float b=10.5;
      double x=20.30;
      
      int *iptr = &a;
      char *cptr = &ch;
      float *fptr = &b;
      double *dptr = &x;
      
      printf("%d\n",a);    //10
      printf("%c\n",ch);   //A
      printf("%f\n",b);    //10.5000
      printf("%lf\n",x); //20.30000
      
      printf("\n");
      
      printf("%ld\n",sizeof(a));    // 4
      printf("%ld\n",sizeof(ch));   // 1
      printf("%ld\n",sizeof(b));    // 4
      printf("%ld\n",sizeof(x));    //8
      
      printf("\n");
      
      printf("%ld\n",sizeof(iptr));   //8
      printf("%ld\n",sizeof(cptr));   //8
      printf("%ld\n",sizeof(fptr));   //8
      printf("%ld\n",sizeof(dptr));   //8
      
      printf("\n");
      
      return 0;
      
}
/*
10
A
10.500000
20.300000

4
1
4
8

8
8
8
8


*/
