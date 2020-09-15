#include<stdio.h>
int main(){

     int num,x;
     printf("Enter size of array=\n");
     scanf("%d",&num);
     
     int array[num];
     printf("Enter array elements=\n");
     for(int itr=0;itr<num;itr++){
     
          scanf("%d",&array[itr]);
     }
     
     for(int in=0;in<num;in++){
     
         for(int out=1+in;out<num;out++){
         
              if(array[in] > array[out]){
              
                    x=array[in];
                    array[in]=array[out];
                    array[out]=x;     
              }
         }
     }
     
     printf("Elements in ascending order=\n");
     for(int itr=0;itr<num;itr++){
     
           printf("%d ",array[itr]);
     }
     
     return 0;
}
/*
Enter size of array=
5
Enter array elements=
2
7
3
9
1
Elements in ascending order=
1 2 3 7 9
*/
