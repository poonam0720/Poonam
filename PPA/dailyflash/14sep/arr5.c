#include<stdio.h>
int main(){
     int num;
     
     printf("Enter size of array=\n");
     scanf("%d",&num);
     
     int array[num];
     
     printf("Enter array elements=\n");
     for(int itr=0;itr<num;itr++){
      
          scanf("%d",&array[itr]);
     }
     
     printf("values=\n");
     
     for(int itr=0;itr<num;itr++){
     
         printf("%d ",array[itr]);
     }
     
     printf("\n");
     
     printf("Number which are palindrome=\n");
     
     for(int itr=0;itr<num;itr++){
          
          int remainder,reverse=0,original;
          original=array[itr];
       
         while(array[itr]>0){

              remainder = array[itr] % 10;
              reverse = reverse * 10 + remainder;
              array[itr]= array[itr] / 10;
         }
         
         if(reverse==original){
         
             printf("%d ",reverse);
         }
         
     }   
     return 0;
}

/*
Enter size of array=
7
Enter array elements=
1
3
11
20
50
71
101
values=
1 3 11 20 50 71 101 
Number which are palindrome=
1 3 11 101 
*/
