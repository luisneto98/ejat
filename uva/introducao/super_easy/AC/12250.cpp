#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
   string palavra;
   int caso = 1;
   map<string, string> mapa;
   mapa["HELLO"] = "ENGLISH";
   mapa["HOLA"] = "SPANISH";
   mapa["HALLO"] = "GERMAN";
   mapa["BONJOUR"] = "FRENCH";
   mapa["ZDRAVSTVUJTE"] = "RUSSIAN";
   mapa["CIAO"] = "ITALIAN";
   while(cin >> palavra) {
      if (palavra == "#")
         break;
   if (mapa.find(palavra) == mapa.end())
      cout << "Case " << caso++ << ": UNKNOWN" << endl; 
   else
      cout << "Case " << caso++ << ": " << mapa[palavra] << endl;
//      printf("Case %d: %s\n", caso++, mapa[palavra]);
   }
}
      
