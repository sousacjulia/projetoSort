#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void display(int* a, int n){
    for (int i = 0; i < n; i++) {
  printf("%d ", a[i]);
}
  printf("\n");
}
void insertionSort(int *a, int n){
  int key, j;
  for (int i = 1; i <= n-1; i++){
    key = a[i];
    j = i-1;        
  while(j>=0 && a[j] > key){
  a[j+1] = a[j];
  j--;
  }
  a[j+1] = key;
 }
}
int main(){
  srand (time(NULL));
  int n = 10000000;
  int *array = (int * ) malloc (n * sizeof(int));
  for (int i=0;i<n-1;i++){
    array[i] = rand() %n;
  } 
for (int i=0;i<n;i++){
    printf("%d  ", array[i]);
  }
  return 0;
}