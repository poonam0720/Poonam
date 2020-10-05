#include<stdio.h>
int main() {

    int x = 10;
    
    int *ptr = &x;
    
    int **pptr = &ptr;
    
    printf("%d\n",x);//10
    
    printf("%d\n",*ptr);//10
  
    printf("%p\n",ptr);
    printf("%p\n",*pptr);
    
    printf("%p\n",&ptr);
    printf("%p\n",pptr);
    
    return 0;
}

/*
10
10
0x7fff03c70114
0x7fff03c70114
0x7fff03c70118
0x7fff03c70118

*/
