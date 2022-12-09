#include<cs50.h>
#include<stdio.h>
#include<string.h>




 typedef struct data
 {
    string names ;
    string numbers;
 };
 

int main(void){
string names []= {"carter","David"};
string numbers [] = {"+12345959","+170594945"};

for (int i = 0; i < 2; i++)
{
    if (strcmp(names[i],"David")== 0)
    {
       printf("Found %s\n", numbers[i]);
       return 0;
    }
    
}
printf("Not found \n");
return 1;


}
