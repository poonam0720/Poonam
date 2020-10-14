#include<stdio.h>
int main() {

     int size;
     printf("Enter length of array=\n");
     scanf("%d",&size);
     
     char arr1[size];
     
     void *ptr1 = arr1;
     
   
     
     printf("Enter Password=\n");
     
     for(int itr = 0; itr < size; itr++){
     
           if(arr1[0] >= 'A' && arr1[0] <= 'Z'  || arr1[1] >= 'a' && arr1[1] <= 'z' )  {
           
                scanf(" %c",&arr1[itr]);
                
           }
           else{
           
                scanf(" %c",&arr1[itr]);
           }
           
     }
     
     printf("Password=\n");
     
     for(int itr = 0; itr < size; itr++)  {
     
           printf(" %c",*(char*)ptr1);
           
           ptr1 = (char*)ptr1 + 1;
     }
     
     printf("\n");
     
     return 0;
     
     
}

/*
Enter length of array=
10
Enter array password=
A 
b
1
2
3
4
5
6
7
8
Password=
 A b 1 2 3 4 5 6 7 8


*/
