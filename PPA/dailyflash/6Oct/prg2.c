#include<stdio.h>
int main() {

    int row,col;
    
    printf("Enter number of rows and columns=\n");
    scanf("%d %d",&row,&col);
    
    int marr[row][col];
    
    //taking input of matrix
    printf("Enter matrix=\n");
    
    for(int i=0; i<row; i++){
    
         for(int j=0; j<col; j++){
         
             scanf("%d",&marr[i][j]);
         }
    }
    
    
    //Displaying matrix
    printf("Matrix=\n");
    
    for(int i=0; i<row; i++){
    
         for(int j=0; j<col; j++){
         
             printf("%d\t",marr[i][j]);
         }
         printf("\n");
    }
    
    
    // average of row
    for(int i=0; i<row; i++){
    
        int x1 = 0;
        float avg1;
        for(int j=0; j<col; j++){
        
            x1 = x1 + marr[i][j];
        }
        avg1 = x1 /col;
        printf("Average of row %d is %.2f\n",i,avg1);
        printf("\n");
    }
    
    //average of column
    
   
    
    
    
    
    return 0;
}


/*
Enter number of rows and columns=
3
4
Enter matrix=
1
2
3
4
5
6
7
8
9
10
11
12
Matrix=
1	2	3	4	
5	6	7	8	
9	10	11	12	
Average of row 0 is 2.00

Average of row 1 is 6.00

Average of row 2 is 10.00

*/






























