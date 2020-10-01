#include<stdio.h>
int main() {

    int arr1[3][3];
    
    printf("Enter array elements=\n");
    for(int itr=0; itr<3; itr++){
    
          for(int itr1=0; itr1<3; itr1++){
          
               scanf("%d",&arr1[itr][itr1]);
          }
    }
    
    for(int itr=0; itr<3; itr++){
    
          for(int itr1=0; itr1<3; itr1++){
          
               printf("%d ",arr1[itr][itr1]);
          }
          printf("\n");
    }
}
/*
Enter array elements=
1
2
3
4
5
6
7
8
9
1 2 3 
4 5 6 
7 8 9 
*/
