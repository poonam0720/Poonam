#include<stdio.h>
int main() {

       int size,x,y;
       printf("Enter size of array=\n");
       scanf("%d",&size);
       
       int arr1[size];
       
       printf("Enter array=\n");
       for(int itr=0; itr<size; itr++){
       
           scanf("%d",&arr1[itr]);
       }
       
       int *iptr1 = arr1;
       int *iptr2 = &(arr1[0]);
       
       for(int itr=0; itr<size; itr++){
       
           x = iptr1 + itr;
           y = iptr1 + 1 + itr;
           
           printf("%d\n",y - x);
       }
       
       for(int itr=0; itr<size; itr++){
       
           x = iptr2 + itr;
           y = iptr2 + 1 + itr;
           printf("%d\n",y - x);
       }
}

/*
Enter size of array=
5
Enter array=
10
20
30
40
50
4
4
4
4
4
4
4
4
4
4

*/


