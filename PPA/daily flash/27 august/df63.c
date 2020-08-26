#include<stdio.h>
int main()
{
      int n1,n2,s1,s2,c1,c2,add=0,sub=0;
      
      printf("Enter numbers=\n");
      scanf("%d %d",&n1,&n2);
      
      s1=n1*n1;
      s2=n2*n2;
      
      c1=n1*n1*n1;
      c2=n2*n2*n2;
      
      add=c1+c2;
      
      sub=s1-s2;
      
      printf("Addition of %d and %d is %d\n",c1,c2,add);
      printf("Subtraction of %d and %d is %d\n",s1,s2,sub);
      
      return 0;
}
/*
Enter numbers=
10
20
Addition of 1000 and 8000 is 9000
Subtraction of 100 and 400 is -300

*/
