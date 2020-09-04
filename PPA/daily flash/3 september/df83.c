#include<stdio.h>
int main()
{
    int I,R,V;
    
    printf("Enter current=\n");
    scanf("%d",&I);
    printf("Enter resistance=\n");
    scanf("%d",&R);
    
    V=I*R;
    
    printf("Voltage=%d\n",V);
    
    return 0;
}
/*
Enter current=
10
Enter resistance=
5
Voltage=50

*/
