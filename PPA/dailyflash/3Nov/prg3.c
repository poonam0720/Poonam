#include<stdio.h>

struct s1{

      char name[10];   
      int num;
      int *ptr;
      char c;
      float f;
};

void main()  {

      struct s1 val;
      printf("%ld\n",sizeof(val));  //32
}

/*

32

*/
