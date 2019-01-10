#include<stdio.h>

using namespace std;

int main(){
   char letra;
   int value = 1;
   while(scanf("%c",&letra) != EOF){
      if(letra == '"'){
         if(value){
            printf("``");
            value = 0;
         }else{
            printf("''");
            value = 1;
         }
         
      }else{
         printf("%c",letra);
      }
   }
}
