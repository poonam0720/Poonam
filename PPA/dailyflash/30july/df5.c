/*             1
             8 1 4 
          27 8 1 4 9
       64 27 8 1 4 9 16
 */
 
 #include<stdio.h>
void main()
{
    int n;
    printf("Enter numberr=\n");
    scanf("%d",&n);
  
   for(int row=1;row<=n;row++)
   {
       int i=n;
      for(int space=n-1;space>=row;space--)
      {
          printf("\t");
          i--;
      }
      
      for(int col=1;col<=row*2-1;col++)
      {
         if(col>=row)
         {
             printf("%d\t",i*i);
             i++;
         }
         else
         {
                
                printf("%d\t",i*i*i);
                i--;
             
         }

      } 
      printf("\n");
     
   }
}

/*  OUTPUT:

Enter numberr=
4
			1	
		8	1	4	
	27	8	1	4	9	
64	27	8	1	4	9	16	


*/   
