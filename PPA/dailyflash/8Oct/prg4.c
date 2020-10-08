#include<stdio.h>
int main() {

      int n1,n2,add,sub,mul,div;
      
      printf("Enter two numbers=\n");
      scanf("%d %d",&n1,&n2);
      
      add = n1 + n2;
      sub = n1 - n2;
      mul = n1 * n2;
      div = n1 / n2;
     
      int *aptr = &add;
      int *sptr = &sub;
      int *mptr = &mul;
      int *dptr = &div;
      
      
      int *arr[] = {aptr,sptr,mptr,dptr};
      
      printf("Output\n");
      
      printf("Addition=%d\n",*(*(arr + 0)));
      printf("Subtraction=%d\n",*(*(arr + 1)));
      printf("Multiplication=%d\n",*(*(arr + 2)));
      printf("Division=%d\n",*(*(arr + 3)));
      
      return 0;
      
}
 
 /*
 Enter two numbers=
20
10
Output
Addition=30
Subtraction=10
Multiplication=200
Division=2
*/
