#include <stdio.h> 
#include <cmath>

int main(){
   int n,qtd;
   scanf("%d",&qtd);
   while(qtd--){
      scanf("%d",&n);
      
      int value  = (((((n*567)/9)+7492)*235)/47)-498;
      int ret = value/100;
      printf("%d\n", abs((value - (ret*100))/10));
   }
}
