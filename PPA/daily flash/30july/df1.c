/*           4
           3 4 5
         2 3 4 5 6
       1 2 3 4 5 6 7
 */
         

 #include<stdio.h>
void main()
{
    int n;
    printf("Enter numberr=\n");
    scanf("%d",&n);
  
   for(int row=1;row<=n;row++)
   {
       char ch='D';
       for(int space=n-1;space>=row;space--)
      {
          printf("\t");
          
      }
      
      for(int col=1;col<=row*2-1;col++)
      {
         if(col>=row)
         {
             printf("%c\t",ch);
             ch++;
         }
         else
         {
                
                printf("%c\t",ch);
                ch--;
             
         }

      } 
      printf("\n");
     
   }
}

