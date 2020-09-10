#include<stdio.h>
int main()
{
    int sec,hr;
    
    printf("Enter hours=\n");
    scanf("%d",&hr);

    sec=hr*60*60;
    
    printf("Output=%d\n",sec);
    
    return 0;
}
/*
Enter hours=
1
Output=3600

*/
