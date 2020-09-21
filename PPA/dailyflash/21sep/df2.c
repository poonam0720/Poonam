/*       S 
         S T
         S T A 
         S T A C 
         S T A C K
*/       


#include<stdio.h>
int main(){

    int num;
    printf("Enter size of array=\n");
    scanf("%d",&num);
    
    char array[num];
    
    printf("Enter charcaters=\n");
    
    for(int itr=0;itr<num;itr++){
    
        scanf(" %c",&array[itr]);
    }
    
    printf("\n");
    
    for(int row=0;row<num;row++){
    
        for(int col=0;col<=row;col++){
       
               printf("%c ",array[col]);     
            }
        
        printf("\n");
      }  
    
    return 0;
}
/*
Enter size of array=
5
Enter charcaters=
S
T
A
C
K

S 
S T 
S T A 
S T A C 
S T A C K 

*/
