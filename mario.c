#include <cs50.h>
#include <stdio.h>
 void mario();
int main(void)
{
   mario();
}
 void mario()
{
int x;
    do{
        x=get_int("height:");
    }
    while(x<=0|| x>8);
   
   for(int i=1;i<=x;i++) 
   { 
    for( int k=0;k<x-i;k++)
    {
      printf(" ");
    }
    for(int y=0;y<i;y++)
    {
        printf("*");
    } 
     printf("\n");
   }
}