#include<stdio.h>
int main(){

     printf("If the element of first is a square of second array it will print 1 if not it will print -1\n");
    int num;
    printf("Enter size of array=\n");
    scanf("%d",&num);
    
    int array[num];
    int array1[num];
    
    printf("Enter array=\n");
    
    for(int itr=0;itr<num;itr++){
    
        scanf("%d",&array[itr]);
    }
    
     printf("Enter array1=\n");
    
    for(int itr1=0;itr1<num;itr1++){
    
        scanf("%d",&array1[itr1]);
    }
    
    printf("\n");
    
    for(int itr2=0;itr2<num;itr2++){
    
        if(array[itr2] == (array1[itr2]*array1[itr2])){
        
             printf("1 ");
        }
        else{
        
           printf("-1 ");
        }
        printf("\n");
    }
    
}
/*
If the element of first is a square of second array it will print 1 if not it will print -1
Enter size of array=
5
Enter array=
4
16
25
36
49
Enter array1=
2
4
6
6
7

1 
1 
-1 
1 
1 
*/
