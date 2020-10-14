#include<stdio.h>
int main() {

     int size;
     printf("Enter length of array=\n");
     scanf("%d",&size);
     
     float arr1[size];
     
     printf("Enter array elements=\n");
     for(int itr = 0; itr <size; itr++)  {
     
           scanf("%f",&arr1[itr]);
     }
     
     void *ptr1 = arr1;
     
     printf("Output=\n");
     
     for(int itr = 0; itr < size; itr++){
     
           printf("%.2f\t",*(float*)ptr1);
           
           ptr1 = (float*)ptr1 + 1;
     }
     
     printf("\n");
     
     return 0;
}

/*

Enter length of array=
5
Enter array elements=
10.3005
20.7600
30.000
40.5000
50.5500
Output=
10.30	20.76	30.00	40.50	50.55

*/
