#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void merge(int arr[], int start, int mid, int end) {
  int len1 = mid - start + 1;
  int len2 = end - mid;
  int leftArr[len1], rightArr[len2];

  for (int i = 0; i < len1; i++)
    leftArr[i] = arr[start + i];
  for (int j = 0; j < len2; j++)
    rightArr[j] = arr[mid + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = start;
  while (i < len1 && j < len2) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }
  while (i < len1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }
  while (j < len2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}
void mergeSort(int arr[], int start, int end) {
  if (start < end) {
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
  }
}
int main() {
  srand (time(NULL));
  int n = 10;
  int *array = (int * ) malloc (n * sizeof(int));
  for (int i=0;i<n-1;i++){
    array[i] = rand() %n;
  }
  for (int i=0;i<n;i++) {
    printf("%d  ", array[i]);
  }
  return 0;
 }
//int main(){
//int i, n=1000, vet[n];
//srand (time(NULL));
  //  for(i=0;i<n;i++){
    //    vet[i] = rand() % n;
        
      //  printf("vet[%d] = %d\n", i, vet[i]);
    //}
    //for(i=0;i<n;i++){
      //  printf("%d, ",vet[i]);
    //}
//return 0;
    
//}
