#include<stdio.h>
int main()
{
     int num;
     
     printf("Enter size of array=\n");
     scanf("%d",&num);
     
     int stud_age[num];
     
     printf("Enter array elements=\n");
     for(int i=0;i<num;i++)
     {
         scanf("%d",&stud_age[i]);
     }
     
     printf("Array elements=\n");
     for(int i=0;i<num;i++)
     {
         printf("%d\n",stud_age[i]);
     }
     return 0;
}
/*
Enter size of array=
8
Enter array elements=
10
20
30
40
50
60
70
80
Array elements=
10
20
30
40
50
60
70
80

*/
