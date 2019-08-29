#include <iostream>
using namespace std;
#include <stdio.h>
#include <vector>

int main() {
  long h, o, temp;
  while(scanf("%ld %ld", &h, &o) != EOF){
    if(h < o){
      temp = h;
      h = o;
      o = temp;
    }
    printf("%ld\n", (h-o));
  }

  return 0;
}