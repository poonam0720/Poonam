#include<stdio.h>
int main()
{
    int m,v;
    float KE;
    
    printf("Enter mass=\n");
    scanf("%d",&m);
    printf("Enter velocity=\n");
    scanf("%d",&v);
    
    KE=(0.5*m*v*v);
    
    printf("Kinetic energy of the object is:%.1f\n",KE);
    
    return 0;
}
/*
Enter mass=
54
Enter velocity=
5
Kinetic energy of the object is:675.0


*/
