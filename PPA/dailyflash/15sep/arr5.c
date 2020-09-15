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
       
       printf("Array before reverse=\n");
       
       for(int itr=0;itr<num;itr++){
       
           printf("%d ",array[itr]);
       }
       printf("\n");
       
       printf("Reversed array=\n");
       for(int itr=num-1;itr>=0;itr--){
       
            printf("%d ",array[itr]);
       }
       
       return 0;
}
/*
Enter size of array=
4 
Enter array elements=
56
63
74
60
Array before reverse=
56 63 74 60 
Reversed array=
60 74 63 56
*/
