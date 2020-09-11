#include<stdio.h>
int main()
{
     int num,sum=0;
     
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
     printf("Sum of array elements are=\n");
     for(int i=0;i<num;i++)
     {
         sum+=stud_age[i];
     }
     printf("%d\n",sum);
     
     return 0;
}
/*
Test case:1
Enter size of array=
6
Enter array elements=
50
48
57
89
07
36
Array elements=
50
48
57
89
7
36
Sum of array elements are=
287


Test case:2

Enter size of array=
10
Enter array elements=
1
2
3
4
5
6
7
8
9
10
Array elements=
1
2
3
4
5
6
7
8
9
10
Sum of array elements are=
55

*/
