#include<stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int caso = 1;
   int num1,num2,num3;
   while(n--){
      scanf("%d %d %d",&num1,&num2,&num3);
      if(num1 <= 20 && num2 <= 20 && num3 <= 20)
         printf("Case %d: good\n",caso++);
      else
         printf("Case %d: bad\n",caso++);
   }
}
