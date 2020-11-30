#include<stdio.h>

void divideString(char *str, int n, int len) { 

         int stringsize = len;  
         int part; 
  

	 if (len % n != 0) { 

    		printf("Invalid Input: String size"); 
   		printf(" is not divisible by n"); 
    		return; 
	} 
  

        part = len / n; 

  	for (int i = 0; i< len; i++) { 

              	 if (i % part == 0) {
           
          	         printf("\n");  
          	 }
           
           printf("%c", str[i]); 
	} 
	printf("\n");  
} 
 
void main() {

             char str[100];
             int length;
 
             printf("\nEnter the String : ");
             fgets(str, 5, stdin);
 
             length = 0;  // Initial Length
 
             while (str[length] != '\0')
             length++;
             
             divideString(str, 2, length); 

}

/*
Enter the String : ABCD

AB
CD

*/

