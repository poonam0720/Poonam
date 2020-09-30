#include<stdio.h>
int main(){

     int size;
     printf("Enter size of array=\n");
     scanf("%d",&size);
     
     int arr1[size];
     int *iptr1 = arr1;
     printf("Enter array elements=\n");
     for(int itr=0; itr<size; itr++){
     
          scanf("%d",&arr1[itr]);
     }
     
     printf("Reverse array=\n");
     for(int itr=size-1; itr>=0; itr--){
    
         printf("%d\n",*(iptr1+itr));
    }
    printf("\n");
    
    return 0;
}
/*
Enter size of array=
10
Enter array elements=
20
30
40
50
60
70
80
90
100
110
Reverse array=
110
100
90
80
70
60
50
40
30
20

*/
