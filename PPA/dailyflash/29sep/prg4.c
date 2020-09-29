#include<stdio.h>
int main(){

     int size;
     
     printf("Enter size of array=\n");
     scanf("%d",&size);
     
     char arr1[size];
     
     char *cptr = arr1;
     
     printf("Enter elements of array=\n");
     for(int itr=0; itr<size; itr++){
     
          scanf(" %c",&arr1[itr]);
     }
     
     printf("Output=\n");
     
     for(int itr=0; itr<size; itr++){
     
          if(arr1[itr] >= 65 && arr1[itr]<=90){
          
               arr1[itr] = arr1[itr] + 32;
               printf("%c\t",arr1[itr]);
          }else if(arr1[itr] >= 97 && arr1[itr]<=122){
          
               arr1[itr] = arr1[itr] - 32;
               printf("%c\t",arr1[itr]);
          }
     }
     printf("\n");
     return 0;
}

/*
Enter size of array=
4
Enter elements of array=
C
O
r
e
Output=
c	o	R	E
*/
