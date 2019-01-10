#include<stdio.h>
#include<string.h>

int two(char *num){
   int count = 0 ;
   if(num[0] == 't')
      count++;
   if(num[1] == 'w')
      count++;
   if(num[2] == 'o')
      count++;
   return count;
   
}

int one(char *num){
   int count = 0 ;
   if(num[0] == 'o')
      count++;
   if(num[1] == 'n')
      count++;
   if(num[2] == 'e')
      count++;
   return count;
   
}

int main(){

   int n;
   scanf("%d",&n);
   char num[7];
   while(n--){
      scanf("%s",num);
      if(strlen(num) == 3)
         if(two(num) > 1)
            printf("2\n");
         else
            printf("1\n");
      else
         printf("3\n"); 
   }
}





