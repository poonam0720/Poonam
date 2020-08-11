/*
0	1	4	9	16	
	2	6	12	20	
		8	15	24	
			18	28	
				32	
*/				

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number=\n");
    scanf("%d",&n);
    
    int x=0,y=0,n1=4,n2=3,ans=0;;
    for(int row=1;row<=n;row++)
    {
        for(int space=1;space<row;space++)
        {
           printf("\t");
           
        }
       
        for(int col=n;col>=row;col--)
        {
           ans=x*y;
           printf("%d\t",ans);
           x++;
           y++;
        }
         printf("\n");
        x=x-n1;
        y=y-n2;
        n1--;
        n2--;
       
    }
}
/*
Enter number=
5
0	1	4	9	16	
	2	6	12	20	
		8	15	24	
			18	28	
				32	
*/				
