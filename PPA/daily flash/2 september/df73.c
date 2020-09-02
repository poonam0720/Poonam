#include<stdio.h>
int main()
{
    int distance,time,speed;
    
    printf("Enter distance=\n");
    scanf("%d",&distance);
    
    printf("Enter time=\n");
    scanf("%d",&time);
    
    speed=distance/time;
    
    printf("The velocity of a particle roaming in space %dm/s\n",speed);
    
    return 0;
}
/*
Enter distance=
100
Enter time=
20
The velocity of a particle roaming in space 5m/s

*/
