#include<stdio.h>
int main()
{
      int num,s1,s2,fact,n;
      
      printf("Enter size of number=\n");
      scanf("%d",&num);
      
      int array[num];
      
      printf("Enter array number=\n");
      
      for(int itr=0;itr<num;itr++){
      
          scanf("%d",&array[itr]);
      }
      
      printf("Elements in array=\n");
      
      for(int itr=0;itr<num;itr++){
      
          printf("%d ",&array[itr]);
      }
      
      
       for(int itr=0;itr<num/2;itr++){
       
           s1=0;
           s2=0;
           n=array[itr];
           
           while(n>0){
           
                fact=1;
                
                for(int itr=2;itr<=n;itr++)
                    fact=fact*itr;
                    
                s1=s1+fact;
                
                n=n/10;
           }
           
           n=array[num-itr-1];
           
           
           
          while(n>0){
           
                fact=1;
                
                for(int itr=2;itr<=n;itr++)
                    fact=fact*itr;
                    
                s12=s2+fact;
                
                n=n/10;
           }
           
          if(s1==array[itr] && s2==array[num-itr-1]){
          
                  array[itr]=array[itr] + array[num-itr-1];
                  array[num-itr-1]= array[itr] - array[num-itr-1];
                  array[itr] = array[itr] - array[num-itr-1];     
          }
       }
       
       printf("\n\nFinal array=\n");
       
       for(int itr=0;itr<num;itr++){
       
             printf("%d ",&array[itr]);
             printf("\n\n");
       }
       
       return 0;
}
























