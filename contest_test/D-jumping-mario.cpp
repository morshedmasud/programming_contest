#include <iostream>
using namespace std;
#include <stdio.h>
#include <vector>

int main() {
  int  k;
  cin>>k;
  for(int j = 1; j <= k; j++){
    int heigh=0, low=0, temp=0, n, t;
    cin>>t;
    for(int i=0; i<t; i++){
      cin>>n;
      if (i == 0){
        temp = n;
      }
      else if(n > temp){
        heigh++;
        temp = n;
        }
      else if(n < temp){
        low++;
        temp = n;
      }

    }
    printf("Case %d: %d %d\n", j, heigh, low);
  }

  return 0;
}