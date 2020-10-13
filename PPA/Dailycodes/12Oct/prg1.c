#include<stdio.h>
int main() {

        int arr1[5] = {10,20,30,40,50};
        
        int *ptr1 = arr1;
        int *ptr2 = &arr1;
        
        printf("%p\n",ptr1);//100
        printf("%p\n",ptr2);  //100
        
        ptr1++;
        ptr2++;
        
        printf("%p\n",ptr1); //104
        printf("%p\n",ptr2);  //104
        
        return 0;
}

/*
0x7fff9a796000
0x7fff9a796000
0x7fff9a796004
0x7fff9a796004

*/
