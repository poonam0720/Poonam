#include<stdio.h>
int global_arr[5];
int main(){

    int local_arr[5];

    printf("Local array:");
    for(int i=0; i<5; i++){
    
       printf("%d ",local_arr[i]);
    }

    printf("\nglobal array:");
    for(int i=0; i<5; i++){
    
        printf("%d ",global_arr[i]);
    }

    printf("\n");

    return 0;
}
/*
Local array:0 0 -1179340640 22066 1342488480 
global array:0 0 0 0 0 

*/
