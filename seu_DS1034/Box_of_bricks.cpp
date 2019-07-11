#include<stdio.h>

int main()
{
    int n, i, set = 1;
    while(scanf("%d", &n) != 0){
      if(n==0) break;
      int arr[n+2];
      int sum = 0, avg, mv = 0;
      for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
      }
      avg = sum / n;
      for(i = 0; i < n; i++){
        if(arr[i] > avg){
          mv += arr[i]-avg;
        }
      }
      printf("Set #%d\n", set++);
      printf("The minimum number of moves is %d.\n\n", mv);
    }
    return 0;
}