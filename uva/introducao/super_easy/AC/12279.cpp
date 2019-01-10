#include<stdio.h>


int main(){
   int n;
   int caso = 1;
   while(scanf("%d",&n)){
      if(!n) break;
      
      int count = 0,aux;
      while(n--){
         scanf("%d",&aux);
         if(aux)
            count++;
         else
            count--;  
      }
      printf("Case %d: %d\n",caso++,count);
   }
}
