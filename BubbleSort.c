#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  srand (time(NULL));
  int n = 10;
  int *array = (int * ) malloc (n * sizeof(int));
  for (int i=0;i<n-1;i++){
  array[i] = rand() %n;
  } 
  int i;
  for (int j=0;j<n-i-1;j++){
    if (array [i] > array[j+1]){
    int temp = array;
    array[j] = array[j+1];
    array[i+1] = temp;
  }
  }
  for (int i=0;i<n;i++) {
    printf("%d  ", array[i]);
  }
  return 0;
}
