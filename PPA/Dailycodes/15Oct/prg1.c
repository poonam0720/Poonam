#include<stdio.h>

int elepass(int x, int sum) {

        sum = sum + x;
        return sum;
}

void main() {

       int arr[] = {10,20,30,40,50};
       
       int sum = 0;
       
       for(int i = 0; i < 5; i++) {
       
             sum =  elepass(arr[i],sum);
       }
       
       printf("%d\n",sum);
}

/*

150

*/
