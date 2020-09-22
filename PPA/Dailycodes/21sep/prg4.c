#include<stdio.h>
int main(){

    int a=10;
    
    int *iptr1 = &a;
    int *iptr2 = &a;
    
    printf("%p\n",iptr1);   // address of a
    printf("%p\n",iptr2);   // address of a
    
    printf("%d\n",*iptr1);  // 10
    printf("%d\n",*iptr2);   // 10
    
    *iptr2 = 11;
    
    printf("%d\n",*iptr2);   // 11
    printf("%d\n",*iptr1);   // 11
    
    return 0;
}

/*
0x7ffc14ea85f4
0x7ffc14ea85f4
10
10
11
11
*/
