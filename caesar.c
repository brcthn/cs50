#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void caesar();
int main(int argc, string argv[])
{
    caesar(argc, argv);
}
void caesar(int argc, string argv[]){
    string y;
    string x;
    if(argc!=2){
         printf("Usage: ./caesar key\n");
         exit(1);
    }
    y=argv[1];
    for(int k=0;k<strlen(y);k++){
      if((int)y[k]>=48 && (int)y[k]<=57){
        continue;
      }else{
          printf("Usage: ./caesar key\n");
          exit(1);
      }
    }
    
       x=get_string("plaintext: ");
       printf("%s","ciphertext: ");
          
       for(int i=0;i<strlen(x);i++)
    {
        if(((int)x[i]>=65 && (int)x[i]<=90) || ((int)x[i]>=97  &&(int)x[i]<=122))
       {   
           int sum = ((atoi(y)%26)+(int)x[i]);
          int newC = 0;
            if((int)x[i]>=65 && (int)x[i]<=90 && sum > 90){
                newC= sum-90;
                newC += 64;
            } else if((int)x[i]>=97 && (int)x[i]<=122 && sum > 122){
                newC= sum-122;
                newC += 96;
            } else {
                newC = sum;
            }
         printf("%c",newC);
       } else
       {
           printf("%c",x[i]);
       }     
    }     
    printf("%s","\n"); 
 }