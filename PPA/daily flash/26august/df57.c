#include<stdio.h>
int main()
{
    int n;
    printf("Enter number=\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        printf("Cube of %d: %d\n",i,i*i*i);
    }
    return 0;
}
/*
Enter number=
20
Cube of 1: 1
Cube of 2: 8
Cube of 3: 27
Cube of 4: 64
Cube of 5: 125
Cube of 6: 216
Cube of 7: 343
Cube of 8: 512
Cube of 9: 729
Cube of 10: 1000
Cube of 11: 1331
Cube of 12: 1728
Cube of 13: 2197
Cube of 14: 2744
Cube of 15: 3375
Cube of 16: 4096
Cube of 17: 4913
Cube of 18: 5832
Cube of 19: 6859
Cube of 20: 8000

*/
