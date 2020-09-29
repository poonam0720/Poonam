#include<stdio.h>
int main(){

     int num;

     printf("Enter size of array=\n");
     scanf("%d",&num);

     int arr1[num];

     printf("Enter array1=\n");
     for(int itr=0; itr<num; itr++){
     
         scanf("%d",&arr1[itr]);
     }

     int *iptr1 = &arr1[0];
     int *iptr2 = &arr1[num-1];
     
     int x1 = 0;
     int y1 = num-1;
     
     while(x1 <y1){
     
         int temp = *iptr1;
         *iptr1 = *iptr2;
         *iptr2 = temp;
         
         iptr1++;
         iptr2--;
         x1++;
         y1--;
     }
     
     printf("Reverse array=\n");
     for(int itr=0; itr<num; itr++){
         
         printf("%d\n",arr1[itr]);
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
Reverse array=
5
4
3
2
1

*/
