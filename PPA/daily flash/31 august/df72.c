#include<stdio.h>
int main()
{
     int num1,num2,n1,n2;
     
     printf("Enter starting number=\n");
     scanf("%d",&num1);
     printf("Enter number=\n");
     scanf("%d",&num2);
     
     printf("Enter ending numbers=\n");
     scanf("%d %d",&n1,&n2);
     
     for(int i=num1;i<=num2;i++)
     {
        if(i%n1==0 && i%n2==0)
        {
            printf("%d ",i);
        }
     }
     return 0;
}
/*
Enter starting number=
1
Enter number=
100
Enter ending numbers=
4
7
28 56 84
*/
