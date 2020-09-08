#include<stdio.h>
int main()
{
    int rs;
    float dollar;
    
    printf("Input=\n");
    scanf("%d",&rs);
    
    dollar=rs*73.78;
    
    printf("%.2f dollars\n",dollar);
    
    return 0;
}
/*
Input=
5
368.90 dollars

*/
