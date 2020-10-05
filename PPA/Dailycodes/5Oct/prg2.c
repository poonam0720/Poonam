#include<stdio.h>
int main() {

    int x = 10;
    
    int *ptr = &x;
    
    int **pptr = &ptr;
    
    printf("%d\n",x);//10
    
    printf("%d\n",*ptr);//10
    
    printf("%d\n",**pptr);//10
    
    return 0;
}

/*
10
10
10

*/
