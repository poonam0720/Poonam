#include<stdio.h>
int main() {

     int m,n;
     
     //taking number of rows and columns
     printf("Enter number of rows and columns=\n");
     scanf("%d %d",&m,&n);
     
     int marr[m][n];
     
     //taking input     
     printf("Enter matrix elements=\n");
     
     for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             scanf("%d",&marr[row][col]);
         }
     }
          
     //display matrix
     for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             printf("%d\t",marr[row][col]);
         }
         printf("\n");
     }
     
     for(int row=0; row<m; row++){
     
         for(int col=0; col<n; col++){
         
             for(int itr=2; itr<m/2; itr++){
             
                 if(marr[row][col] % itr == 0){
                 
                     printf("%d   ",marr[row][col]);
                 }
             }
         }
     }
     
     printf("\n");
     
     return 0;
}
