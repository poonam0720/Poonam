#include<stdio.h>
void main()
{
    char ch='A';
    int i=1;
    while(i<=5)
    {
       int j=5;
       while(j>=i)
       {
          printf("%c ",ch);
          ch++;
          j--;
       }
       printf("\n");
       i++;
    }
}
