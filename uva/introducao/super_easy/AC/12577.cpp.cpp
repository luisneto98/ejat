#include <iostream>

using namespace std;

int main() {
   string palavra;
   int caso = 1;
   while(cin >> palavra) {
      if (palavra == "*") break;
      if (palavra == "Hajj") printf("Case %d: Hajj-e-Akbar\n", caso++);
      else printf("Case %d: Hajj-e-Asghar\n", caso++);
      
   }
}
