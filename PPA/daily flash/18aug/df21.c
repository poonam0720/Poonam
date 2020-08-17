#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter numbers=\n");
    scanf("%d %d",&n1,&n2);
    
    if(n1>n2)
    {
       printf("%d is maximum\n",n1);
    }
    
    else
    {
       printf("%d is maximum\n",n2);
    }
    return 0;
}

/*  
Enter numbers=
1
2
2 is maximum

*/
