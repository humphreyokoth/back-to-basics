#include<stdio.h>



int main(void)
{
int scores[3];
 scores[0]= get_int("Scores:");
 scores[1]= get_int("Scores:");
 scores[2]=get_int("Scores:");

printf("Average:%f\n",(scores[0]+scores[1]+scores[2])/3.0);

}