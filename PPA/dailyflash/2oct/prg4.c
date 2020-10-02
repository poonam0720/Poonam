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
       
           if(*(iptr1 + itr) % 2 != 0)
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
1
2
3
4
5
1 3 5 

Enter array size=
6
Enter array1=
2
3
8
7
9
23
3 7 9 23 


*/
