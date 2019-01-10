#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   int a;
   int n;
   cin >> n;
   for(int i = 0; i < n; i++) {
      vector<int> results;
      for(int j = 0; j < 3; j++) {
         cin >> a;
         results.push_back(a);
      }
      sort(results.begin(), results.end());
         
      printf("Case %d: %d\n", i+1, results[1]);
  }
}
