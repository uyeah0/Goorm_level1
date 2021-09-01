#include <stdio.h>

int main() {
	
	float base,high;
	
	scanf("%f %f", &base, &high);
	
	float r = (base*high)/2.0;
	printf("%.1f", r);

	return 0;
}
