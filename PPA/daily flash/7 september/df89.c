#include<stdio.h>
int main()
{
    int r1,r2,i1,i2,addr,addi;
    char ch;
    
    do
    {
         printf("Enter number 1=\n");
         printf("Real part=\n");
         scanf("%d",&r1);
         printf("Imaginary part=\n");
         scanf("%d",&i1);
         
         printf("Enter number 2=\n");
         printf("Real part=\n");
         scanf("%d",&r2);
         printf("Imaginary part=\n");
         scanf("%d",&i2);
         
         addr=(r1+r2);
         addi=(i1+i2);
         
         printf("Addition of %d+%di and  %d+%di is %d+%di\n",r1,i1,r2,i2,addr,addi);
         
         printf("Do you want to continue?\n");
         scanf(" %c",&ch);
         
    }while(ch=='Y' || ch=='y');
    return 0;
}

/*
Enter number 1=
Real part=
5
Imaginary part=
3
Enter number 2=
Real part=
2
Imaginary part=
1
Addition of 5+3i and  2+1i is 7+4i
Do you want to continue?
y
Enter number 1=
Real part=
6
Imaginary part=
2
Enter number 2=
Real part=
4
Imaginary part=
8
Addition of 6+2i and  4+8i is 10+10i
Do you want to continue?
n

*/
