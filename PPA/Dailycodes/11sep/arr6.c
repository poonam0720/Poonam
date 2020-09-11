#include<stdio.h>
int main()
{
     int stud_age[5];
     
     printf("Enter array elements=\n");
     for(int i=0;i<5;i++)
     {
         scanf("%d",&stud_age[i]);
     }
     
     printf("Array elements=\n");
     for(int i=0;i<5;i++)
     {
         printf("%d\t",stud_age[i]);
     }
     return 0;
}
/*
Enter array elements=
10
20
30
40
50
Array elements=
10	20	30	40	50
*/
