#include<stdio.h>
int main(){

    int num,max=0,min=0,max1=0,min1=0;
    
    printf("Enter size of array=\n");
    scanf("%d",&num);
    
    int array[num];
    int array1[num];
    
    printf("Enter array elements=\n");
    
    for(int itr=0;itr<num;itr++){
    
        scanf("%d",&array[itr]);
    }
    
    printf("Enter array1 elements=\n");
    
    for(int itr=0;itr<num;itr++){
    
         scanf("%d",&array1[itr]);
    }
    
    max=array[0];
    min=array[0];
    for(int itr=0;itr<num;itr++){
    
          if(array[itr] > max){
          
              max=array[itr];
          }
          
          if(array[itr] < min){
          
             min = array[itr];
          }
    }
    
    max1=array1[0];
    min1=array1[0];
    for(int itr=0;itr<num;itr++){
    
          if(array1[itr] > max1){
          
              max1=array1[itr];
          }
          
          if(array1[itr] < min1){
          
             min1 = array1[itr];
          }
    }
    
    printf("Maximum number from first array=%d\n",max);
    printf("Minimun number from first array=%d\n",min);
    printf("Maximum number from second array=%d\n",max1);
    printf("Minimum number from second array=%d\n",min1);
    
    return 0;
    
}
/*
Enter size of array=
5
Enter array elements=
5
7
2
4
9
Enter array1 elements=
3
55
11
77
44
Maximum number from first array=9
Minimun number from first array=5
Maximum number from second array=77
Minimum number from second array=3

*/





























