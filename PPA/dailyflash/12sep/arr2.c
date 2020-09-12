#include<stdio.h>
int main()
{
    int n;
    char ch;
    do
    {
    printf("Enter size of array=\n");
    scanf("%d",&n);
    
    int array[n];
    
    printf("Enter numbers in array=\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("Prime numbers are=\n");
   
    for(int i=0;i<n;i++)
    {
       int x=2;
       if(array[i]%x!=0)
       {
           printf("%d is prime number\n",array[i]);
       }
       else
       {
           printf("%d not prime number\n",array[i]);
           x++;
       }
    }
    printf("Do you want to continue?\n");
    scanf(" %c",&ch);
    }while(ch=='Y' || ch=='y');
    return 0;
}
/*
Enter size of array=
5
Enter numbers in array=
100
13
31
58
79
Prime numbers are=
100 not prime number
13 is prime number
31 is prime number
58 not prime number
79 is prime number
Do you want to continue?
y
Enter size of array=
4
Enter numbers in array=
2
3
37
66
Prime numbers are=
2 not prime number
3 is prime number
37 is prime number
66 not prime number
Do you want to continue?
n

*/
