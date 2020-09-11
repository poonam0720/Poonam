#include<stdio.h>
void main()
{
    int i=1;
    do
    {
       if(i%2==0)
       printf("%d is even\n",i);
       i++;
    }while(i<=20);
    printf("Out of while\n");
}
/*   
2 is even
4 is even
6 is even
8 is even
10 is even
12 is even
14 is even
16 is even
18 is even
20 is even
Out of while

*/

