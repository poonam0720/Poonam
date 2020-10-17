#include<stdio.h>

int elePass(int *ptr) {

       int sum = 0;
       
       for(int i = 0; i < 6; i++)  {
       
             sum = sum + *(ptr + i);   // arr[i] = *(arr + i)
                          
       }
       
       return sum;
}

void main() {

        int arr[] = {10,20,30,40,50,60};
        
        int sum = 0;
        
        sum = elePass(arr);
        
        printf("%d\n",sum);  //210
}

/*

210

*/
