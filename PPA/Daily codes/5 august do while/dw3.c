#include<stdio.h>
void main()
{
    int  num;
    char ch='y';
    do
    {
        printf("Enter number\n");
        scanf("%d",&num);
        
        int var=num;
        int rem=0;
        int rev=0;
        
        while(num!=0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        printf("rev of %d is %d \n",var,rev);
        
        printf("Do you want to continue:\n");
        scanf(" %c",&ch);
    }while(ch=='y'||ch=='Y');
}
/*  
Enter number
234
rev of 234 is 432 
Do you want to continue:
y
Enter number
567
rev of 567 is 765 
Do you want to continue:
y
Enter number
753
rev of 753 is 357 
Do you want to continue:
y
Enter number
1245
rev of 1245 is 5421 
Do you want to continue:
y
Enter number
0987
rev of 987 is 789 
Do you want to continue:
Y
Enter number
987
rev of 987 is 789 
Do you want to continue:
n
*/
