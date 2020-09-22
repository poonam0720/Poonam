#include<stdio.h>
int main(){

     int num,max,fact;
     printf("Enter size of array=\n");
     scanf("%d",&num);
     
     int array[num];
     int array1[num];
     int array2[num];
     
     printf("Enter array=\n");
     for(int itr=0;itr<num;itr++){
     
         scanf("%d",&array[itr]);
     }
     
     printf("Enter array1=\n");
     for(int itr=0;itr<num;itr++){
     
         scanf("%d",&array1[itr]);
     }
     
     for(int itr=0;itr<num;itr++){
     
          if(array1[itr] % array[itr] == 0){
          
              fact=1;
              
             if(array[itr]>array1[itr]){
             
                  max = array[itr];
             }
             else{
             
                  max = array1[itr];
             }
             
             for(int itr1=2;itr1<=max;itr1++){
             
                  fact = fact * itr1;
                  array2[itr]=fact;
             }
          }
          else{
          
                 if(array[itr]<array1[itr]){
                 
                      array2[itr] = array[itr];
                 }
                 else{
                 
                      array2[itr] = array1[itr];
                 }
          }
          
     }
     
     printf("\n");
     
              for(int itr=0;itr<num;itr++)     {
              
                    printf("%d ",array2[itr]);
              }
              
              return 0;
}
/*
Enter size of array=
4
Enter array=
2
2
1
8
Enter array1=
5
4
5
3

2 24 120 3
*/









































