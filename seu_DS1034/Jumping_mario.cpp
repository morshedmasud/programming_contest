#include <stdio.h>

int main(){
  int t, n;
  scanf("%d", &t);

  for(int i=1; i<=t; i++){
    scanf("%d", &n);
    int h=0, l=0, x, y=0;
    for(int j = 0; j < n; j++ ){
      scanf("%d", &x);
      if(j == 0){
        y = x;
      }
      else if(x > y){
        h++;
        y = x;
      }
      else if(x < y){
        l++;
        y = x;
      }
    }
    printf("Case %d: %d %d\n", i, h, l);
  }

  return 0;
}