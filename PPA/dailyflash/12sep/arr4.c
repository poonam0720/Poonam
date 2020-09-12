#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array=\n");
    scanf("%d",&n);
    
    int array[n];
    
    printf("Enter numbers in array=\n");
    
    for(int i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
    }
    
    printf("Numbers in array=\n");
    
    for(int i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}

/*
Test case:1
Enter size of array=
5
Enter numbers in array=
46
37
97
43
22
Numbers in array=
46
37
97
43
22


Test case:2
Enter size of array=
6
Enter numbers in array=
10
30
27
67
44
98
Numbers in array=
10
30
27
67
44
98

*/

