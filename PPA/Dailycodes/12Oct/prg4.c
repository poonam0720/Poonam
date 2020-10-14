/*   2D array using pointer to an array   */

#include<stdio.h>
int main() {

     int arr1[2][5] = {10,20,30,40,50,60,70,80,90,100};
    
     int (*ptr)[5] = &arr1;
     
     
     for(int i=0;i<2; i++)  {
     
            for(int j=0; j<5; j++) {
     
                        printf("%d\n",*(*(ptr + i) + j));  //10 20 30 40 50   60 70 80 90 100
     
     }
     
     }
     
     return 0; 
}

/*
10
20
30
40
50
60
70
80
90
100


*/
