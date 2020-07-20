#include<stdio.h>
void main()
{
    int x=10;
    
    fordemo:
          printf("printing.............\n");
          
    for(int i=1;i<=10;i++)
    {
       goto fordemo;
    }
}



/*we have delared the i inside the loop as well as we have incremented the i inside the loop only that's why the statement will be printed infinitely.*/
