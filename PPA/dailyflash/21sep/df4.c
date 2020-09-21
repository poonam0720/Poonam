#include<stdio.h>
int main(){

    int num;
    
    printf("Enter size of array=\n");
    scanf("%d",&num);
    
    int array[num];
    printf("Enter array elements=\n");
    
    for(int itr=0;itr<num;itr++){
    
        scanf("%d",&array[itr]);
    }
    
    int temp=0;
    
    for(int itr=0;itr<num/2;itr++){
       
           temp = array[itr];
           array[itr] = array[num-itr-1];
           array[num-itr-1] = temp;
       }  
       
       for(int itr=0;itr<num;itr++){
       
           printf("%d ",array[itr]);
       }
    
    return 0;
}

/*
Enter size of array=
6
Enter array elements=
3
61
23
9
87
0
0 87 9 23 61 3
*/
