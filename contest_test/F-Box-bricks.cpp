#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;


int main() {
  int n,set=1;
  while(scanf("%d", &n) != 0){
    if (n == 0) break;
    int sum=0, avg=0, mv=0;
    int arr[n+1];
    for(int i=0; i<n; i++){
      scanf("%d", &arr[i]);
      sum += arr[i];
    }
    avg = sum/n;
    for (int i = 0 ; i < n; i++){
      if (arr[i] > avg){
        mv+=arr[i] - avg;
      }
    }
    printf("Set #%d\n", set++);
    printf("The minimum number of moves is %d.\n\n", mv);
  }

  return 0;
}