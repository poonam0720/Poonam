#include<stdio.h>
int main()
{
    float principle,time,rate,SI;
    
    printf("Enter principle=\n");
    scanf("%f",&principle);
    
    printf("Enter time=\n");
    scanf("%f",&time);
    
    printf("Enter rate=\n");
    scanf("%f",&rate);
    
    SI=(principle*time*rate)/100;
    
    printf("Simple Intrest=%.2f\n",SI);
    
    return 0;
    
}
/*
Enter principle=
200000
Enter time=
4
Enter rate=
7.8
Simple Intrest=62400.00

*/
