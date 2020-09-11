#include<stdio.h>
int main()
{
     int n,sec_pre,sec_suc;
     
     printf("Enter number=\n");
     scanf("%d",&n);
     
     sec_pre=n-2;
     sec_suc=n+2;
     
     printf("Second successor=%d\n",sec_suc);
     printf("Second predecessor=%d\n",sec_pre);
     
     return 0;
}
/*
Enter number=
50
Second successor=52
Second predecessor=48

*/
