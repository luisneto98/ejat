#include <iostream>
#include <cstdio>

using namespace std;

int main() {
   int n;
   int Cx, Cy, x, y;
   
   while (cin >> n && n != 0) {
      //printf("Test Cases: %d\n", n);
      cin >> Cx >> Cy;
      //printf("CX: %d CY: %d\n", Cx, Cy);
      while (n--) {
         cin >> x >> y;
         //printf("X: %d Y: %d\n", x, y);
         if (x == Cx || y == Cy)
            printf("divisa\n");
         else {
            if (x < Cx && y > Cy) {
               printf("NO\n");
            } else if (x > Cx && y > Cy) {
               printf("NE\n");
            } else if (x > Cx && y < Cy) {
               printf("SE\n");
            } else if (x < Cx && y < Cy) {
               printf("SO\n");
            }
         }
         
      }

   }
}
      
