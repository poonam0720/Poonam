#include<stdio.h>
int main()
{
    int  a, b,c;
    printf("Enter numbers=\n");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b)
    {
       if(a>c)
       {
          printf("%d is greater\n",a);
       }
       else
       {
          printf("%d is greater\n",c);
       }
    }
    else if(b>c)
    {
       printf("%d is greater\n",b);
    }
    else
    {
       printf("%d is greater\n",c);
    }
    return 0;
}
/*
Enter numbers=
1
4
2
4 is greater

*/
