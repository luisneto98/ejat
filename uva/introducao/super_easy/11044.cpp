#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
   int n;
   int a, l;
   
   cin >> n;
   while(n--) {
      cin >> a >> l;
      printf("%d\n", (a/3) * (l/3));   
   }   
}
