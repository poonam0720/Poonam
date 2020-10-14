#include<stdio.h>
int main() {

     int size;
     printf("Enter size of array=\n");
     scanf("%d",&size);
     
     int arr1[size];
     float arr2[size];
     
     void *vptr1 = arr1;
     void *vptr2 = arr2;
     
     printf("Enter integer array=\n");
     for(int itr = 0; itr < size ; itr++){
     
          scanf("%d",&arr1[itr]);
     }
     
     printf("Enter float array=\n");
     for(int itr = 0; itr < size ; itr++){
     
          scanf("%f",&arr2[itr]);
     }
     
     printf("Integer array=\n");
     for(int itr = 0; itr < size ; itr++){
     
          printf("%d\t",*(int*)vptr1);
          vptr1 = (int*)vptr1 + 1;          
     }
     
     
     printf("\n");
     
     printf("Float array=\n");
     for(int itr = 0; itr < size ; itr++){
     
          printf("%f\t",*(float*)vptr2);
          vptr2 = (float*)vptr2 + 1;          
     }
     
     printf("\n");
     
     return 0;
}

/*
Enter size of array=
2
Enter integer array=
10
20
Enter float array=
20.4545
50.3433
Integer array=
10	20	
Float array=
20.454500	50.343300

*/
