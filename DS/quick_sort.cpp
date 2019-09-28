#include <stdio.h>
#include <iostream>

using namespace std;

void swap(int* a, int* b){
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int low, int high){
  int pivot = arr[low];
  int i = low;
  int j = high;

  while(i < j){
    do {
    i++;
    }while(arr[i] <= pivot);
    do {
      j--;
    }while(arr[j] > pivot);

    if (i < j){
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[low], arr[j]);
  return j;
}

void quick_Sort(int arr[], int low, int high){
  if (low < high){
    int j = partition(arr, low, high);
    quick_Sort(arr, low, j);
    quick_Sort(arr, j+1, high);
  }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int binary_search(int arr[], int l, int r, int find){

  if (r >= l){
    int mid = (l + r) / 2;

    if (arr[mid] == find){
      return mid;
    }
    if(arr[mid] > find){
      return binary_search(arr, l, mid-1, find);
    }
    if(arr[mid] < find){
      return binary_search(arr,  mid+1, r, find);
    }
  }


  return -1;
}

int main() {
    int arr[] = {10, 7, 8,45,0,6,3, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"length of arr: "<< n <<endl;
    quick_Sort(arr, 0, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    int find = 0;
    int result = binary_search(arr, 0, n, find);
    (result == -1)? cout<<"element not here":cout<<"element here at: "<<result<<endl;
    return 0;
}