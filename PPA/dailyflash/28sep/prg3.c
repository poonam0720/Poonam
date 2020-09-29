#include<stdio.h>
int main(){

     int num;
     printf("Enter size of array=\n");
     scanf("%d",&num);
     
     int arr1[num];
     
     printf("Enter array elements=\n");
     
     for(int itr=0; itr<num; itr++){
     
         scanf("%d",(arr1 + itr));
     }
     
     for(int itr=0; itr<num; itr++){
         
          if(*(arr1+itr) % 2 == 0){
             
                *(arr1+itr) = *(arr1+itr) + 1;
          }
          else{
               
                *(arr1+itr) = *(arr1+itr) + 1;
          }
     }
     
     printf("Output=\n");
     for(int itr=0; itr<num; itr++){
     
          printf("%d\n",*(arr1 + itr));
     }
     
     printf("\n");
     
     return 0;
}

/*
Enter size of array=
5
Enter array elements=
1
2
8
6
4
Output=
2
3
9
7
5

*/
