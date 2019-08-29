#include <iostream>
using namespace std;
#include <stdio.h>




int main() {
  int t, a, b;
  cin >> t;

  while(t--){
    cin >> a >> b;
    (a > b)? printf(">\n"): (a < b)? printf("<\n"): printf("=\n");
  }
  return 0;
}

