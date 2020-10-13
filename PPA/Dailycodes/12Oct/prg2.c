#include<stdio.h>
int main() {

    int arr1[5] = {10,20,30,40,50};
    int arr2[5] = {60,70,80,90,100};
        
    int (*ptr)[5] = &arr1;
    
    printf("%p\n",ptr);
    
    ptr++;
    
    printf("%p\n",ptr);
    
    return 0;
}


/*
0x7ffd2e3eb4c0
0x7ffd2e3eb4d4


*/
