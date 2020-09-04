#include<stdio.h>
int main()
{
    int n1,n2,n3,res;
    
    printf("Enter three number=\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if(n1<n2 && n1<n3)
    {
        res=n1;
    }
    else if(n2<n1 && n2<n3)
    {
        res=n2;
    }
    else
    {
       res=n3;
    }
    
    printf("The minimum number amongst %d %d %d is %d\n",n1,n2,n3,res);
    
    return 0;
}
/*
Enter three number=
56
7
99
The minimum number amongst 56 7 99 is 7
*/
