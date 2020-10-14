#include<stdio.h>
int main() {

    int size;
    
    printf("Enter the length of your full name including space:\n ");
    scanf("%d",&size);
    
    char name[size];
    
    char* ptr[size];
    
    printf("Enter your name=\n");
    for(int itr = 0; itr < size; itr++){
      
          scanf("%c",&name[itr]);
          ptr[itr] = &name[itr];
    }
    
    char* temp = ptr[size-1];
    int idx = -1;
    
    for(int itr = 0; itr < size; itr++) {
    
        printf("%c",*temp);
        if(*temp == ' ')
            idx = itr;
            
        temp--;
    }
    
    printf("\nSpace is at %dindex\n",idx);
    
    return 0;
}
