#include<stdio.h>
#include<stdbool.h>

struct rtime{

       int x1;
       float f1;
       char ch1;
       double d1;
       short s1;
       long l1;
       bool b1;
       
       int array[4];
};

void main()  {

     struct rtime obj1 = {10, 30,45, 'A', 40.38, 45, 123, true};
     obj1.array[4] = {10,20,30,40};
     
     printf("\n");
     
     printf("Integer = %d\n",obj1.x1);
     printf("Float = %f\n",obj1.f1);
     printf("Character = %c\n",obj1.ch1);
     printf("double = %lf\n",obj1.d1);
     printf("Short = %hi\n",obj1.s1);
     printf("Long = %ld\n",obj1.l1);
     printf("Boolean = %d\n",obj1.b1);
     
     printf("Integer array=");
     for(int i = 0; i < 4 ; i++) {
     
          printf("%d\t",obj1.array[i]);
     }
     printf("\n");
}
