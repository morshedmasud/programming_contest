#include <iostream>
#include <stdio.h>

using namespace std;


int main() {
  int t, n, m, x, y;
  while(true){
    cin >> t;
    if(t == 0){
      break;
    }
    cin >> n >> m;
    for(int i= 0; i<t; i++){
      cin >> x >> y;
      if (x==n || y==m){
        cout<<"divisa"<< endl;
      }
      else if (x < n && y > m){
        cout<<"NO"<< endl;
      }
      else if (x > n && y > m){
        cout<<"NE"<< endl;
      }
      else if (x < n && y < m){
        cout<<"SO"<< endl;
      }
      else if (x > n && y < m){
        cout<<"SE"<< endl;
      }

    }
  }
}