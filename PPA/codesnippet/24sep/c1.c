#include<stdio.h>
void changevalue(int arr[]){

     arr[1] = 10;
}

void main(){

    int arr[5] = {10,20,30,40,50};
    
    changevalue(arr);
    
    printf("%d %d\n",*(arr + 1),arr[1]);
}

/*
10 10

*/
