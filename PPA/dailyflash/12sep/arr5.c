#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter size of array=\n");
    scanf("%d",&n);
    
    int array[n];
    
    printf("Enter numners inn array=\n");
    
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&array[i]);
    }
    
    printf("Enter numbers divisible by 5 are:\n");
    
    for(int i=0;i<n;i++)
    {
        if(array[i]%5==0)
        {
            printf("%d\n",array[i]);
        }
    }
    return 0;
}
/*
Test case:1
Enter size of array=
5
Enter numners inn array=
10
34
57
24
55
Enter numbers divisible by 5 are:
10
55


Test case:2
Enter size of array=
4
Enter numners inn array=
50
46
97
100
Enter numbers divisible by 5 are:
50
100

*/

