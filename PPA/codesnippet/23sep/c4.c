#include<stdio.h>
int main(){

     int size, i;
     scanf("%d",&size);
     int arr[size];
     for(i=1; i<=size; i++){
     
         scanf("%d",arr[i]);
         printf("%d",arr[i]);
     }
     
     return 0;
}

/*
the code is erroneous since the statement declaring array is inavlid.
*/
