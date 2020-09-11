#include<stdio.h>
int main()
{
     int num,max=0;
     
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
          if(num_array[i]>=max)
          {
               max=num_array[i];
          }
     }
     printf("Maximum number is %d.\n",max);
     
     return 0;
}
/*
Test case 1:
Enter size of array=
5
Enter array element=
9
4
14
25
20
Maximum number is 25.

Test case :2

Enter size of array=
10
Enter array element=
45
25
48
96
011
679
36
87
93
100
Maximum number is 679.

*/
