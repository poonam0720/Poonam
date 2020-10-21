#include<stdio.h>

int triangle(int arr[]);

void main()  {
     
     int arr[3];
     
     printf("Enter angles of triangle=\n");
     for(int i = 0; i < 3; i++)  {
     
         scanf("%d",&arr[i]);
     }
     
    int res = triangle(arr);
    
    if(res == 0)  {
    
        printf("It is triangle.\n");
    }
    else{
    
        printf("It is not a triangle.\n");
    }
}

int triangle(int arr[]){

     int sum = 0;
   
     
     for(int i = 0; i < 3; i++) {
     
          sum = sum + arr[i];
     }       
     
     if(sum == 180)  {
     
         return 0;
     }
     else{
     
         return 1;
     }
     
}

/*

Enter angles of triangle=
100
20
60
It is triangle.


*/
