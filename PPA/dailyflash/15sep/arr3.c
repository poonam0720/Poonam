#include<stdio.h>
int main(){

     int num,x=1,count=0;
     printf("Enter size of array=\n");
     scanf("%d",&num);
     
     int array[num];
     
     printf("Enter array elements=\n");
     for(int itr=0;itr<num;itr++){
     
            scanf("%d",&array[itr]);
     }
     
     int rem=0;
     
     for(int  itr=0;itr<num;itr++){
     
          while(array[itr]!=0){
          
                rem=array[itr]%10;
                if(rem==x)
                    count++;
                array[itr]=array[itr]/10;
          }
     }
     
     printf("Occurace of 1 in array=%d\n",count);
     
     return 0;
}
/*
Enter size of array=
9
Enter array elements=
121
3
45
21
61
11
12
22
4
Occurace of 1 in array=7
*/
