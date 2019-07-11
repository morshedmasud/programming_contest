#include <stdio.h>

int main(){
  int t, s1, s2, s3, r;
  scanf("%d", &t);

  for(int i = 1; i <= t; i++){
    scanf("%d %d %d", &s1, &s2, &s3);
      if((s1 > s2 && s1 < s3) || (s1 < s2 && s1 > s3)){
        printf("Case %d: %d\n", i, s1);
      }
      else if((s2 > s1 && s2 < s3) || (s2 < s1 && s2 > s3)){
        printf("Case %d: %d\n", i, s2);
      }
      else{
        printf("Case %d: %d\n", i, s3);
      }
  }
  return 0;
}