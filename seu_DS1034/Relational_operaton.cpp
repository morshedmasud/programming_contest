#include <stdio.h>

int main(){
  int t, a, b;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d%d", &a, &b);
    (a < b)? printf("<\n"): (a > b)? printf(">\n"): printf("=\n");
  }
  return 0;
}


// #include <stdio.h>

// int main(){
//   int k, x, y, m, n;

//   while(true){
//     scanf("%d", &k);
//     if(k == 0){
//       break;
//     }
//     scanf("%d %d", &n, &m);

//     for(int i = 0; i < k; i++){
//       scanf("%d %d", &x, &y);
//       if(x == n || y == m){
//         printf("divisa\n");
//       }
//       else if(x > n && y > m){
//         printf("NE\n");
//       }
//       else if(x > n && y < m){
//         printf("SE\n");
//       }
//       else if(x < n && y > m){
//         printf("NO\n");
//       }
//       else if(x < n && y < m){
//         printf("SO\n");
//       }
//     }
//   }
//   return 0;
// }





// #include <cstdio>
// using namespace std;

// int main() {
// 	int n, sum, havg, x[55], ans, count = 1;

// 	while (scanf("%d", &n), n) {
// 		sum = 0;
// 		for (int i = 0; i < n; i++) {
// 			scanf("%d", &x[i]);
// 			sum += x[i];
// 		}
// 		havg = sum / n;
// 		ans = 0;
// 		for (int i = 0; i < n; i++) {
// 			if (x[i] > havg)
// 				ans += x[i] - havg;
// 		}
// 		printf("Set #%d\nThe minimum number of moves is %d.\n\n", count++, ans);
// 	}

// 	return 0;
// }