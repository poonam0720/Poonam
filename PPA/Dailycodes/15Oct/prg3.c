#include<stdio.h>

int elePass(int arr[]) {

       int sum = 0;
       
       for(int i = 0; i < 5; i++)  {
       
             sum = sum + arr[i];
                          
       }
       
       return sum;
}

void main() {

        int arr[] = {10,20,30,40,50};
        
        int sum = 0;
        
        sum = elePass(arr);
        
        printf("%d\n",sum);
}

/*
150

*/
