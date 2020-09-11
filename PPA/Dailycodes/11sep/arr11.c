#include<stdio.h>
int main()
{
     int num;
     
     printf("Enter size of array=\n");
     scanf("%d",&num);
     
     int num_array[num];
     printf("Enter array element=\n");
     for(int i=0;i<num;i++)
     {
         scanf("%d",&num_array[i]);
     }
    
     for(int i=0;i<num;i++)
     {
         int x=num_array[i];
         int rem=0,sum=0;
         
         while(x!=0)
         {
             rem=x%10;
             int fact=1;
             for(int j=1;j<=rem;j++)
             {
                 fact=fact*j;
             }
             sum=sum+fact;
             
             x=x/10;
         }
         if(num_array[i]==sum)
         {
             printf("%d is strong number\n",num_array[i]);
         }
     }
     
     return 0;
}
/*
Test case:1

Enter size of array=
5
Enter array element=
30
50
350
250
145
145 is strong number

Test case:2

Enter size of array=
5
Enter array element=
1
2
4
5
145
1 is strong number
2 is strong number
145 is strong number
*/
