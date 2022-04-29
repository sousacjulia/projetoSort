#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{ 
  srand (time(NULL));
  int size = 10000000; 
  int *array = (int * )malloc(size * sizeof(int));
  for (int i=0; i < size; i++) {
    array[i] = rand() %size; // gerar os números aleatórios
  }
  int i, j, min_idx,temp;  
  for (i = 0; i < size-1; i++){
    min_idx = i;  
    for (j = i+1; j < size; j++){
      if (array[j] < array[min_idx])  
      min_idx = j;  
    }
    temp = array[min_idx];
    array[min_idx] = array[i]; 
    array[i] = temp;
    }
  for(int i = 0; i < size ; i++){
    printf("%d, ", array[i]);
  }
  return 0; 
}