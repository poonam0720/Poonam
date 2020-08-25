#include<stdio.h>
int main()
{
    int n;
    printf("Enter number=\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        printf("Square of %d: %d\n",i,i*i);
    }
    return 0;
}
/*
Enter number=
10
Square of 1: 1
Square of 2: 4
Square of 3: 9
Square of 4: 16
Square of 5: 25
Square of 6: 36
Square of 7: 49
Square of 8: 64
Square of 9: 81
Square of 10: 100

*/
