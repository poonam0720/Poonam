#include<stdio.h>

struct player {

         char pName[20];
         int jerno;
};

typedef struct player cric_player;

void main() {

         cric_player vk = {"Virat kohli", 18};
         
         printf("%s\n",vk.pName);
         printf("%d\n",vk.jerno);
         
         cric_player *ptr = NULL;
         ptr = &vk;
         
         printf("%s\n",vk.pName);
         printf("%d\n",vk.jerno);
         
         printf("%s\n",vk.pName);
         printf("%d\n",vk.jerno);
}
