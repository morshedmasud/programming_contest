#include <stdio.h>

int main(){
  long long int hashmat, opponent;
  while(scanf("%lld %lld", &hashmat, &opponent) != EOF){
    (hashmat > opponent)? printf("%lld\n", hashmat-opponent) : printf("%lld\n", opponent-hashmat);
  }
  return 0;
}