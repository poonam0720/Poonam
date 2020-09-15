#include<stdio.h>
int main(){
   
      int num;
      
      printf("Enter size of array=\n");
      scanf("%d",&num);
      
      int array[num];
      
      printf("Enter numbers in array=\n");
      for(int i=0;i<num;i++){
          
          scanf("%d",&array[i]);
          printf("Value=%d\n",array[i]);
      }
      
      int array1[num];
      
      for(int i=0;i<num;i++){
      
          if(array[i]%2==0){
               array1[i]=array[i]*array[i];
          }
          else{
               array1[i]=array[i];
          }
      }
       
       printf("Array=\n");
       for(int i=0;i<num;i++){
       
          printf("%d ",array1[i]);
      }
      
      printf("\n");
      
      int largest=0;
      
      for(int i=0;i<num;i++){
              if(largest<array1[i]){
                 largest=array1[i];
              }
      }
      printf("Largest element in array=%d\n",largest);
     
      int sqrt,temp=0;
    
     if(largest%2==0){
         sqrt= largest/2;
         
         while(sqrt!=temp){
            temp=sqrt;
            
            sqrt=(largest/ temp+temp)/2;
         }
         printf("Root=%d\n",sqrt);
          
     }
     else{
            printf("Value=%d",largest);
     }
     
 
 return 0;     
}


/*
Enter size of array=
5
Enter numbers in array=
1
Value=1
2
Value=2
4
Value=4
5
Value=5
7
Value=7
Array=
1 4 16 5 7 
Largest element in array=16
Root=4

*/
