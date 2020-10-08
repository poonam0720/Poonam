#include<stdio.h>
int main() {

    int x = 10;  //100
    
    int *iptr = NULL;
    void *vptr = NULL;
    
    iptr = &x;
    vptr = &x;
    
    printf("%p\n",vptr);//100
    printf("%p\n",iptr);//100
    
    printf("%p\n",*vptr); //10
    printf("%p\n",*iptr); //10
    
    
    return 0;
}
