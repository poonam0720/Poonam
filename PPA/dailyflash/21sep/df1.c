#include<stdio.h>
int main(){

         int num;
         printf("Enter size of array=\n")     ;
         scanf("%d",&num);
         
         int array[num],array1[num];
         int x=-1,count;
         
         printf("Enter array elements=\n");
         
         for(int itr=0;itr<num;itr++){
         
            scanf("%d",&array[itr]);
         }
        
     
         for(int i=0;i<num;i++){
         
             for(int j=i+1;j<num;j++){
                 
                 count=1;
                 if(array[i]==array[j]){
                 
                      count++;
                      array1[j] = x;
                 }
             }
             if(array1[i]!=x){
             
                 array1[i] = count;
             }
           }
             for(int itr=0;itr<num;itr++){
             
                  if(array1[itr]!=x)    {
                  
                      printf("%d occurs %d times\n",array[itr],array1[itr]);
                  }
             }
            
        
         return 0;
}
/*
Enter size of array=
4
Enter array elements=
1
0
2
1
1 occurs 2 times
0 occurs 1 times
2 occurs 1 times

*/






















