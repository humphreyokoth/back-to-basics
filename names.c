#include<cs50.h>
#include<stdio.h>
#include<string.h>

// Linear search

int main (void){

    string names[]= {"4","6","8","2","7","5","0"};

    for (int i = 0; i < 7; i++)
    {
       if (strcmp(names[i],"9")== 0)
       {
        printf("Found \n");
        return 0;
       }
      
    }
     printf ("Not found...\n");
       return 1;

}