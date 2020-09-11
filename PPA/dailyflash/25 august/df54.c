#include<stdio.h>
int main()
{
    int n,sum=0,numbers;
    float avg;
    
    printf("Enter how many you want to enter=\n");
    scanf("%d",&n);
    
    printf("Enter the elements one by one=\n");
    
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&numbers);
        sum=sum+numbers;
    }
    avg=sum/n;
    
    printf("\n");
    
    printf("Sum of the %d numbers=%d\n",n,sum);
    printf("Average of the %d numbers=%.2f\n",n,avg);
    return 0;
}
/*
Enter how many you want to enter=
10
Enter the elements one by one=
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

Sum of the 10 numbers=55
Average of the 10 numbers=5.00

*/
