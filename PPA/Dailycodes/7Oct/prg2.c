#include<stdio.h>
int main() {

       char carr[5] = {'A', 'B', 'C', 'D', 'E'};
       
       char *cptr = carr;
       int *iptr = carr;
       
       printf("%c\n",*cptr); // A
       printf("%c\n",*iptr); // A
       
       printf("%p\n",cptr);  //100
       printf("%p\n",iptr);  //100
       
       cptr = cptr + 1;
       iptr = iptr + 1;
       
       printf("%c\n",*cptr); // A
       printf("%c\n",*iptr); // E
       
       return 0;
}

/*
A
A
0x7fff75290433
0x7fff75290433
B
E

*/
