#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
      int party[101];
      int n, p, hortal = 0;
      scanf("%d %d", &n, &p);

      for(int i = 0; i < p; i++){
        scanf("%d", &party[i]);
      }

      for(int i = 1; i <= n; i++){
        int hor = 0;

        if((i % 7 == 6) || (i % 7 == 0)){
          continue;
        }
        else{
          for(int j = 0; j < p; j++){
            if(i%party[j]==0){
              hor = 1;
            }
          }
        }
        if(hor){
          hortal++;
        }
      }
      printf("%d\n", hortal);
    }

    return 0;
}