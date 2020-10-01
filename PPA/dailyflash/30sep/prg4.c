#include<stdio.h>
int main(){

     int size;
     printf("Enter size of array=\n");
     scanf("%d",&size);
     
     float arr1[size], total = 1.0;
     float *iptr = arr1;
     
     printf("Enter array elements=\n");
     for(int itr=0; itr<size; itr++){
     
          scanf("%f",&arr1[itr]);
          
          if(itr % 2 == 0){
          
              total = total * *(iptr + itr);
         
          }
     }
     
     printf("%.2f\n",total);
     
     return 0;
}
/*
Enter size of array=
5
Enter array elements=
10.0
20.0
30.0
40.0
50.0
15000.00

*/
