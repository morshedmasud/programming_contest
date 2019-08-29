#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;


int main() {

  int t;
  cin>>t;
  while(t--){
    int d,p,i,los=0;
    bool hort = false;
    cin>>d;
    cin>>p;
    int arrp[p];
    for(i = 0; i < p; i++){
      scanf("%d", &arrp[i]);
    }
    for(i = 1; i <= d; i++){
      hort = false;
      if(i % 7 == 6 || i % 7==0){
        continue;
      }
      else{
        for(int j = 0; j < p; j++){
          if(i % arrp[j] == 0){
            hort = true;
          }
        }
      }
      if (hort){
        los++;
      }

    }
    cout<<los<<endl;
  }
  return 0;
}