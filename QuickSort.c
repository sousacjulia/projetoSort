#include<stdio.h> 

// função to swap os elementos
void swap_elements(int* first, int* second) 
{ 
	int temp = *first; 
	*first = *second; 
	*second = temp; 
} 
// Na função de partição l representa low e h representa high
int partition_function(int arr[], int l, int h) 
{ 
	int p = arr[h]; // pivo é o último elemento
	int i = (l - 1); // Index do elemento menor

	for (int j = l; j <= h- 1; j++) 
	{ 
		// Se o elemento atual for menor que o pivô
		if (arr[j] < p) 
		{ 
			i++; 
			swap_elements(&arr[i], &arr[j]);
		} 
	} 
	swap_elements(&arr[i + 1], &arr[h]); 
	return (i + 1);   
} 

void quick_sort(int arr[], int l, int h) 
{ 
	if (l < h) 
	{ 
		int p_index = partition_function(arr, l, h); 
		quick_sort(arr, l, p_index - 1); 
		quick_sort(arr, p_index + 1, h); 
	} 
} 

void print_Array(int arr[], int len) 
{ 
	int i; 
	for (i=0; i < len; i++) 
		printf("%d ", arr[i]);  
} 

int main(){
  srand (time(NULL));
  int n = 10000000;
  int *array = (int * ) malloc (n * sizeof(int));
  for (int i=0;i<n-1;i++){
    array[i] = rand() %n;
}
  for (int i=0;i<n;i++) {
  printf("%d  ", array[i]);
  }
	return 0; 
} 