#include<stdio.h>
int main() {

       int size;
       printf("Enter size of array=\n");
       scanf("%d",&size);
       
       int arr1[size];
       int arr2[size];
       
       printf("Enter array1=\n");
       for(int itr=0; itr<size; itr++){
       
           scanf("%d",&arr1[itr]);
       }
       
       printf("Enter array2=\n");
       for(int itr=0; itr<size; itr++){
       
           scanf("%d",&arr2[itr]);
       }
       
       int *iptr1 = &(arr1[0]);
       
       printf("array1=\n");
       for(int itr=0; itr<size; itr++){
       
            printf("arr1[%d] = %d and address is %p\n",itr,*iptr1,iptr1);
            iptr1++;
       }
       
        printf("array2=\n");
       for(int itr=0; itr<size; itr++){
       
            printf("arr2[%d] = %d and address is %p\n",itr,*iptr1,iptr1);
            iptr1++;
       }
       
       return 0;
}
/*
Enter size of array=
5
Enter array1=
1
2
3
4
5
Enter array2=
9
8
7
6
5
array1=
arr1[0] = 1 and address is 0x7ffe4089ee30
arr1[1] = 2 and address is 0x7ffe4089ee34
arr1[2] = 3 and address is 0x7ffe4089ee38
arr1[3] = 4 and address is 0x7ffe4089ee3c
arr1[4] = 5 and address is 0x7ffe4089ee40
array2=
arr2[0] = 0 and address is 0x7ffe4089ee44
arr2[1] = -843943433 and address is 0x7ffe4089ee48
arr2[2] = 21972 and address is 0x7ffe4089ee4c
arr2[3] = 5 and address is 0x7ffe4089ee50
arr2[4] = 0 and address is 0x7ffe4089ee54

*/
