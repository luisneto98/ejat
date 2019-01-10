#include <iostream>

using namespace std;

int main() {
   string palavra;
   int doacao, n, total = 0;
   cin >> n;
   while(n--) {
      cin >> palavra;
      if (palavra == "donate") {
         cin >> doacao;
         total += doacao;
      } else {
         cout << total << endl;
      }
   }
}
