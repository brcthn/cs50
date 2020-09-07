#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void vigenere();
int main(int argc, string argv[])
{
    vigenere(argc, argv);
}
void vigenere(int argc, string argv[]){
    string x;
    if(argc!=2){
         printf("Usage: ./caesar keyword\n");
         exit(1);
    }
    x=argv[1];
    for(int i=0; i<strlen(x); i++){
      if(((int)x[i]>=65 && (int)x[i]<=90) || ((int)x[i]>=97  &&(int)x[i]<=122)){
        continue;
      }else{
          printf("Usage: ./caesar keyword\n");
          exit(1);
      }
    }
    string y = get_string("plaintext: ");
    printf("%s","ciphertext: ");

     
    int j=0;
    for(int i=0;i<strlen(y);i++){

        if(((int)y[i]>=65 && (int)y[i]<=90) || ((int)y[i]>=97  &&(int)y[i]<=122)){
            int key = 0;
            if((int)x[i]>=97  &&(int)x[i]<=122){
                key = ((int)x[j]-97);
            }
            else if(((int)x[i]>=65 && (int)x[i]<=90)){
                key = ((int)x[j]-65);
            }

            int result= (int)y[i]+key;
            if( result>122 && (int)y[i]>=97  &&(int)y[i]<=122){
                result=result-26;
            }
            else if(((int)y[i]>=65 && (int)y[i]<=90) && result>90){
                result=result-26;
            }
            printf("%c",result);
            
            j++;
        
            if(j==3){
                j=0;
            }

        } else {
            printf("%c",y[i]);
        }

       
    }
    printf("%s","\n"); 

 }
