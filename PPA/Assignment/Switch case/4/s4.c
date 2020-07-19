#include <stdio.h>
void main() 
{
	int x = 2;

	switch(x << (x + 1))
	 {
    		default:
        		printf("default\n");
    			break;
    		case 1:
        		printf("\n1\n");
        		break;
    	
    		case 2:
 	       		printf("\n2");
        		break;
    	
    		case 3:
        		printf("\n3");
        		break;
    	
    		case 4:
       	 		printf("\n4");
        		break;
    	
    		case 8:
       	 		printf("\n8");
        		break;
	}
	
}

