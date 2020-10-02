#include<stdio.h>
int main() {

       int size;
       printf("Enter array size=\n");
       scanf("%d",&size);
       
       int arr1[size], arr2[size];
       int *iptr1=arr1, *iptr2=arr2;
       
       printf("Enter array1=\n");
       for(int itr=0; itr<size; itr++){
       
           scanf("%d",&arr1[itr]);
       }
       
     
       for(int itr=0; itr<size; itr++){
       
           if(*(iptr1 + itr) % 2 == 0)
           {
               *(iptr2+itr) = *(iptr1+itr);
               printf("%d ",*(iptr2+itr));
           }
           
       }
       
      printf("\n") ;
 
      return 0; 
}
/*
Enter array size=
5
Enter array1=
23
12
56
277
122
12 56 122 
*/
