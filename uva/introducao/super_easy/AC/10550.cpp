#include <iostream>
#include <cmath>

using namespace std;
int menor(int value ){
      if(value > 19)
         return 40 - value;
      return value;
}
int distance(int a, int b, int d){
   if(d){
      if(a < b){
         return a + 40 - b;
      }
      else 
         return a - b; 
   }else{
      if(a > b)
         return 40 - a + b;
      else
         return b-a;  
      
   }
}

int main() {
   int init, a, b, c;
   while(cin >> init >> a >> b >> c){
      if(init || a || b || c)
         printf("%d\n",1080 + distance(init, a,1)*9 + distance(a,b,0)*9 + distance(b,c,1)*9);
      else
         break;
   }
}
   
