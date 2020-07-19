#include<stdio.h>
void main(){

	int num1, num2,result;
	printf("Enter num1 and num2: \n");
	scanf("%d%d",&num1,&num2);
	
	if (num1<0||num2<0)
	 {
		printf("Sorry negative numbers not allowed\n");
	 }
       else
        {
	   result=num1*num2;	
	   switch(result%2)
	   {
		  case 0:
			  printf("Even\n");
			  break;
		  case 1:
			  printf("Odd\n");
			  break;
	  }
	}
}

