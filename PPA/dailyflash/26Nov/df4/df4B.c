#include<stdio.h>

int func2(int n1, int n2) {

          if(n1 == 0){
          
                 return n1;
          }
          
          if(n2 == 0){
          
                 return n2;
          }
          
          if(n1 == n2){
          
                 return n1;
          }
          
          if(n1 > n2){
          
                 return func2(n1-n2, n2);
          }
          
          return func2(n1-n2, n1);
}
