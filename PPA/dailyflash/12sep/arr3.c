#include<stdio.h>
int main()
{
    int n,sum=0;
    double mean;
    
    printf("Enter size of array=\n");
    scanf("%d",&n);
    
    int array[n];
    
    printf("Enter numbers in array=\n");
    
    for(int i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    
    mean=sum/n;
    
    printf("%.2lf\n",mean);
    
    return 0;
    
}
/*
Test  case:1
Enter size of array=
7
Enter numbers in array=
10
20
30
40
50
60
70
40.00

Test case:2
Enter size of array=
7
Enter numbers in array=
1
2
3
4
5
6
7
4.00

*/
