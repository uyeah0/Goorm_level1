#include <stdio.h>
int main() {
	int input, cnt=0;
	scanf("%d",&input);
	for(int i =1; i < input; i++){
		cnt += i;
	}
	printf("%d",cnt);
	return 0;
}
