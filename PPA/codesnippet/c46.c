#include<stdio.h>
int main()
{
    int a=0,i;
    for(int i=0;i<5;i++)
    {
       a++;
       continue;
    }
    printf("%d\n",a);
}
/*  output:
  5
  */
