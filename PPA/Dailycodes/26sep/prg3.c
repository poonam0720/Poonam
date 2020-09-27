#include<stdio.h>
int main(){

	float arr[] = {10.5,20.5,30.5,40.5,50.5};

	float *fptr1 = &(arr[2]);

	float *fptr2 = &(arr[4]);

	int a = fptr1 == fptr2;

	printf("%d\n",a);  //0

	int b = fptr1 != fptr2;

	printf("%d\n",b); //1

	int c = fptr1 <= fptr2;  

	printf("%d\n",c);  // 1

	return 0;
}
/*
0
1
1

*/
