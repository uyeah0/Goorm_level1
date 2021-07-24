#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);
	int* arr = (int*)malloc(sizeof(int)*input);
	for(int i =0; i < input; i++){
		arr[i] = 0;
	}
	int n;
	for(int i =0; i < input; i++){
		scanf("%d", &n);
		arr[i] =n;
	}
	int min;
	min = arr[0];
	for(int i =1; i < input; i++){
		if(arr[i] < min) min = arr[i];
	}
	printf("%d",min);
	return 0;
}
