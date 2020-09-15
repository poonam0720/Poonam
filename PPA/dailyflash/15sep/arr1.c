#include<stdio.h>
int main(){

      int num;
      printf("Enter size of array=\n");
      scanf("%d",&num);
      
      int iarray[num];
      printf("Enter integer array elements=\n");        
       
      for(int itr=0;itr<num;itr++){
      
           scanf("%d",&iarray[itr]);
      }
      
      char carray[num];
      printf("Enter character array elements=\n");        
       
      for(int itr=0;itr<num;itr++){
      
           scanf(" %c",&carray[itr]);
      }
      
      float farray[num];
      printf("Enter float array elements=\n");        
       
      for(int itr=0;itr<num;itr++){
      
           scanf("%f",&farray[itr]);
      }
      
      printf("Array1=\n");
     for(int itr=0;itr<num;itr++){
     
         printf("%d ",iarray[itr]);
     }
          
      printf("\n");
      
       printf("Array2=\n");
     for(int itr=0;itr<num;itr++){
     
         printf("%c ",carray[itr]);
     }
          
      printf("\n");
      
       printf("Array3=\n");
     for(int itr=0;itr<num;itr++){
     
         printf("%f ",farray[itr]);
     }
          
      printf("\n");
      
      printf("Size of array1=%ld\n",sizeof(iarray));
      
      printf("Size of array2=%ld\n",sizeof(carray));
      
      printf("Size of array3=%ld\n",sizeof(farray));
      
      printf("Array address=%p\n",&iarray);
      
      printf("Array address=%p\n",&carray);
      
      printf("Array address=%p\n",&farray);
      
      
      return 0;
}

/*
Enter size of array=
4
Enter integer array elements=
6
2
4
5
Enter character array elements=
U
E
F
T
Enter float array elements=
10.5
20.5
30.5
40.5
Array1=
6 2 4 5 
Array2=
U E F T 
Array3=
10.500000 20.500000 30.500000 40.500000 
Size of array1=16
Size of array2=4
Size of array3=16
Array address=0x7ffc6456eec0
Array address=0x7ffc6456eeb0
Array address=0x7ffc6456eea0

*/
