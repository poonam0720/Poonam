#include<stdio.h>
#include <stdlib.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void divi(int,int);

void main()  {

     char ch1;
     do{
     void (*arrptr[4])(int, int) = {add,sub,mul,divi};
     
     int ch,a,b;
     
     printf("Enter your choice:\n");
     printf("0.Add\n");
     printf("1.Sub\n");
     printf("2.Mul\n");
     printf("3.Div\n");
     
     scanf("%d",&ch);
     
     printf("Enter value for a and b:\n");
     scanf("%d %d",&a,&b);
     
     if(ch < 0 || ch >3) {
     
          printf("Wromg choice\n");
          exit(0);
     }
     else{
     
          arrptr[ch](a,b);
     }
     
     printf("Do you want to coontinue?\n");
     scanf(" %c",&ch1);
     
     }while(ch1 == 'y' || ch1 == 'Y');
}


void add(int x, int y)  {

    printf("Add = %d\n",x + y);   //Add = 30
}


void sub(int x, int y)  {

    printf("sub = %d\n",x - y);  //sub = 10
}

void mul(int x, int y)  {

    printf("mul = %d\n",x * y);  //mul = 200
}

void divi(int x, int y)  {

    printf("Div = %d\n",x / y);  //Div = 2
}

/*

Enter your choice:
0.Add
1.Sub
2.Mul
3.Div
0
Enter value for a and b:
20
10
Add = 30
Do you want to coontinue?
y
Enter your choice:
0.Add
1.Sub
2.Mul
3.Div
1
Enter value for a and b:
30
20
sub = 10
Do you want to coontinue?
y
Enter your choice:
0.Add
1.Sub
2.Mul
3.Div
2
Enter value for a and b:
30
10
mul = 300
Do you want to coontinue?
y
Enter your choice:
0.Add
1.Sub
2.Mul
3.Div
3
Enter value for a and b:
40
4
Div = 10


*/
