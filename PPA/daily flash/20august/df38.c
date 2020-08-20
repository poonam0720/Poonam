#include<stdio.h>
int main()
{
    int year;
    printf("Enter year=\n");
    scanf("%d",&year);
    
    if(year%4==0)
    {
       printf("%d is a leap year\n",year);
    }
    else if(year%400==0)
    {
       printf("%d is centuary year\n",year);
    }
    else
    {
       printf("%d is not leap year\n",year);
    }
    return 0;
}
/*
Enter year=
2020
2020 is a leap year


Enter year=
2018
2018 is not leap year


Enter year=
2016
2016 is a leap year

*/
