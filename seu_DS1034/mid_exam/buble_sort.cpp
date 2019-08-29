#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
  int arr[] = {5,2,8,45,9,8,4,10,1};
  int size = sizeof(arr)/sizeof(int);
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size-1-i; j++){
      if (arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  for (int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}