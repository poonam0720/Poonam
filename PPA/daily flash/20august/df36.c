#include<stdio.h>
int main()
{
    int side1,side2,hypo,ans=0;
    printf("Enter side1,side2,hypo for triangle=\n");
    scanf("%d %d %d",&side1,&side2,&hypo);
    
    ans=(side1*side1)+(side2*side2);
    hypo=hypo*hypo;
    
    if(hypo==ans)
    {
        printf("Triangle statisfies pythgoreon theorm\n");
    }
    else
    {
        printf("Triangle does not statisfies pythgoreon theorm\n");
    }
    return 0;
}
/*
Enter side1,side2,hypo for triangle=
3
4
5
Triangle statisfies pythgoreon theorm

*/
