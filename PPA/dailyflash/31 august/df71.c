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
        if(i%n1==0 || i%n2==0)
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
3
5
3 5 6 9 10 12 15 18 20 21 24 25 27 30 33 35 36 39 40 42 45 48 50 51 54 55 57 60 63 65 66 69 70 72 75 78 80 81 84 85 87 90 93 95 96 99 100
*/
