#include <cs50.h>
#include<math.h>
#include <stdio.h>
void credit();
int main(void)
{
   credit();
}

void credit(){
   long l;
   int digit;
 do{
      l=get_long("Number: ");
   }
 while(l<=0);

  bool isEven=false; 
  int sum=0;
  int count=0;
  int lastTwoDigit=0;
 while(l>0)
 { 
     count++;
       if(isEven==true)
       {
           digit=l%10;
           int d=digit*2;
           if(d>9){
            sum=sum+d%10+d/10;
           }else{
            sum=sum+d;
           }
           isEven=false;
        }else
        {
           digit=l%10;
           sum= sum + digit;
           isEven=true;
        } 
         l= l/10;
         if(l<100&&9<l)
         {
          lastTwoDigit=l;
         }

  }   
    if(sum%10==0 && count>=13 && count<17)
  {
      if(digit == 4){
        printf("VISA\n"); 
        return;
      }
         switch(lastTwoDigit) 
         {
		 case 34: printf("AMEX\n"); break;
         case 37: printf("AMEX\n"); break;
		 case 51: printf("MASTERCARD\n"); break;
         case 52: printf("MASTERCARD\n"); break;
         case 53: printf("MASTERCARD\n"); break;
         case 54: printf("MASTERCARD\n"); break;
         case 55: printf("MASTERCARD\n"); break;
         default: printf("%s\n","INVALID\n"); break;
         }
  }
     else
     {
     printf("%s\n","INVALID\n");
     }
}