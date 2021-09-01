#include <stdio.h>
int main() {
	int d;
	scanf("%d",&d);
	
	int* arr = (int*)malloc(sizeof(int)*d);
	arr[0] = 0;
	for(int i =0; i < d; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i =0; i < d-1; i++){
		for(int j = i+1; j < d; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i =0; i < d; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
