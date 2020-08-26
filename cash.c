#include <cs50.h>
#include<math.h>
#include <stdio.h>

 void cash();
int main(void)
{
   cash();
}
 void cash()
{
    float x;
    int count = 0;
    int cent=0;
    do
    {
        x=get_float("Change:");
    }
    while(x<0);
     cent=round(x*100);
    
    while(cent>=25){
        count = cent/25;
        cent = cent%25;
    }
     while(cent>=10){
        count = count+ cent/10;
        cent = cent%10;
    }
    while(cent>=5){
       count= count+cent/5;
       cent= cent%5;
    }
    while(cent>=1){
     count= count+cent/1;
     cent= cent%1;
   }
    printf("%i\n", count);
}