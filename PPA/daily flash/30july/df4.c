/*            D
            C D C
          B C D C B
        A B C D C B A
*/

#include<stdio.h>
void main()
{
    int n;
    printf("Enter number=\n");
    scanf("%d",&n);
    char ch='D';
   for(int row=1;row<=n;row++)
   {
     
      for(int space=n-1;space>=row;space--)
      {
          printf("  ");
      }
      
      for(int col=1;col<=row*2-1;col++)
      {
         if(col>=row)
         {
             printf("%c ",ch);
             ch--;
         }
         else
         
         {
            printf("%c ",ch);
            ch++;
         }

      } 
      printf("\n");
     
   }
}

/*   OUTPUT:

Enter character=
4
      D 
    C D C 
  B C D C B 
A B C D C B A 

*/
