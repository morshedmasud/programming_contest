#include <stdio.h>

int main(){
  int n;
  while(scanf("%d", &n)){
    if (n == 0){
      break;
    }
    int sum = 0;
    for(int i = 1; i<=n; i++){
      sum += i*i;
    }
    // sum = n * (n + 1) * (2 * n+1) / 6;
    printf("%d\n", sum);
  }
  return 0;
}