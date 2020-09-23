#include<stdio.h>
int main(){

    int arr1[] = {20, 25, 16, 17, 22};
    
    for(int i=0; i<5; i++){
    
        printf("%d ",*(i+arr1));
    }
    
    return 0;
}

/*
20 25 16 17 22
*/
