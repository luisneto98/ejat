#include <iostream>
#include <vector>

using namespace std;

int main() {
   int n, m, num;

   cin >> n;
   
   while(n--) {
   
      cin >> m;
         int maior = 0;
   int menor = 99;
      while(m--) {
         cin >> num;
         if (num > maior)
            maior = num;
         if (num < menor)
            menor = num;
      }
      cout << (maior - menor)*2 << endl;
   }
}
            
         
         
      
   
