#include<stdio.h>
int main(){
        
        int size;
        printf("Enter size of array=\n");
        scanf("%d",&size);
        
        int arr1[size];
        
        int *iptr1 = arr1;
        
        printf("Enter array elements=\n");
        for(int itr=0; itr<size; itr++){
        
            scanf("%d\n",&arr1[itr]);
        }
        
        printf("Elements printed using pointer=\n");
        for(int itr=0; itr<size; itr++){
        
              printf("%d\n",*iptr1);
              iptr1 = iptr1 + 1;
        }
        printf("\n");
        
        printf("Enter array elements=\n");
        for(int itr=0; itr<size; itr++){
        
              printf("%d\n",arr1[itr]);
        }
        printf("\n");
        
        
        return 0;
}
