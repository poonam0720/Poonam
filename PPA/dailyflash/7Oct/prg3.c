#include<stdio.h>
int main() {

         int row,col;
         printf("Enter number of rows and columns=\n");
         scanf("%d %d",&row,&col);
         
         int arr1[row][col];
         int* ptr1 = arr1;
         
         printf("Enter array elements=\n");
         
         for(int i=0; i<row; i++){
         
              for(int j=0; j<col; j++){
              
                   scanf("%d",&arr1[i][j]);
              }
              printf("\n");
         }
         
         printf("Starting address of all the elements=\n");
         
         for(int i=0; i<row; i++){
         
              for(int j=0; j<col; j++){
              
                   printf("%p\t",ptr1);
                   ptr1++;
              }
              printf("\n");
         }

     return 0;
}
/*
Enter number of rows and columns=
2
3
Enter array elements=
1
2
3

4
5
6

Starting address of all the elements=
0x7ffe20c5b040	0x7ffe20c5b044	0x7ffe20c5b048	
0x7ffe20c5b04c	0x7ffe20c5b050	0x7ffe20c5b054	

*/
