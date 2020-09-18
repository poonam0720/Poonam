#include<stdio.h>
int main(){

     int num,count=0;
     
     printf("Enter size of array=\n");
     scanf("%d",&num);
     
     int array[num];
     
     printf("Enter array elements=\n");
     
     for(int itr=0;itr<num;itr++){
     
         scanf("%d",&array[itr]);
     }
     
     int array1[num];
     
     for(int itr=0;itr<num;itr++){
     
          int og,x=0,rem;
          og = array[itr];
          
          while(og != 0){
          
             rem = og % 10;
             
             x = x + rem * rem * rem;
             
             og = og/10;
          }
          
          if(x == array[itr])
          {
              for(int itr=0;itr<num;itr++){
              
                   x = array1[itr];
                   count++;
              }
          }
                  
     }
     
     printf("Armstrong number=\n");
     
     for(int itr=0;itr<count;itr++){
     
          printf("%d ",array1[itr]);
     }
     
     return 0;
}



















