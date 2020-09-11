#include<stdio.h>
int main()
{
    int num1,num2;
    
    printf("Enter start number=\n");
    scanf("%d",&num1);
    printf("Enter ending number=\n");
    scanf("%d",&num2);
    
    for(int i=num1;i<=num2;i++)
    {
        if(i%2!=0)
        {
            printf("Cube of %d=%d annd Square of %d=%d\n",i,i*i*i,i,i*i);
        }
    }
    return 0;
}
/*
Enter start number=
1
Enter ending number=
10
Cube of 1=1 annd Square of 1=1
Cube of 3=27 annd Square of 3=9
Cube of 5=125 annd Square of 5=25
Cube of 7=343 annd Square of 7=49
Cube of 9=729 annd Square of 9=81

*/
