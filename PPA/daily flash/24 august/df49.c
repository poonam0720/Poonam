#include<stdio.h>
int main()
{
    int n;
    printf("Enter number=\n");
    scanf("%d",&n);
  
    for(int i=1;i<=n;i++)
    {
     if(i%2==0)
    {
        printf("%d ",i);
    }
  }
  return 0;
}
/*
Enter number=
100
2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78
*/
