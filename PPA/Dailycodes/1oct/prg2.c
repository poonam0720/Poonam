#include<stdio.h>
int main() {

        int arr1[] = {10,20,30,40,50};
        
        int arr2[3][3] = {1,2,3,4,5,6,7,8,9};
        
        printf("%d\n",2[arr1]);   //30
        
        printf("%d\n",0[arr2][2]);  //3
        printf("%d\n",1[arr2][0]);  //4
        printf("%d\n",2[arr2][1]);  //8
        
        return 0;
}
/*
30
3
4
8
*/
