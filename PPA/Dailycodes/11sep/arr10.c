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
     
     printf("Number divisible by 2 are:\n");
     for(int i=0;i<num;i++)
     if(num_array[i]%2==0)
     {
          printf("%d\n",num_array[i]);
     }
     
     return 0;
}
/*
Enter size of array=
5
Enter array element=
10
5
7
11
24
Number divisible by 2 are:
10
24

*/
