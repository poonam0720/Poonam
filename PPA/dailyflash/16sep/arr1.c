#include<stdio.h>
int main(){

      
      int num,largest=0,largest1=0,temp=0;
      
      printf("Enter size of array=\n");
      scanf("%d",&num);
      
      int array[num];
      
      printf("Enter array elements=\n");
      
      for(int itr=0;itr<num;itr++){
      
          scanf("%d",&array[itr]);
      }
      
      printf("Array=\n");
      
      for(int itr=0;itr<num;itr++){
      
          printf("%d ",array[itr]);
      }
      
      printf("\n");
      
      largest=array[0];
      largest1=array[1];
      
      if(largest < largest1){
      
            temp = largest;
            largest = largest1;
            largest1 = temp;
      }
      
      for(int itr=2;itr<num;itr++){
      
           if(array[itr] > largest){
           
                largest1 = largest;
                largest = array[itr];
           }
           else if(array[itr] > largest1 && array[itr] != largest){
           
               largest1 = array[itr];
           }
      }
      
      printf("The first largest = %d\n",largest);
      printf("The second largest = %d\n",largest1);
      
      return 0;
      
}

/*
Enter size of array=
5
Enter array elements=
10
20
15
30
60
Array=
10 20 15 30 60 
The first largest = 60
The second largest = 30

*/
