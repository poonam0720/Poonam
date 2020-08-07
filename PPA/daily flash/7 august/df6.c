#include<stdio.h>
int main()
{
    int x,y;
    int mul=0;
    printf("Enter two numbers=\n");
    scanf("%d %d",&x,&y);
    
    do
    {
        mul=mul+x;
        y--;
    }while(y!=0);
    
    printf("Multiplication=%d\n",mul);
    return 0;
}

/*  
Enter two numbers=
6 7
Multiplication=42

*/
