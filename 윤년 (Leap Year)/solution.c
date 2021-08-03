#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);
	if (input % 4 == 0 || input % 400 == 0) {
		if (input % 100 == 0) {
			if (input % 400 == 0) printf("Leap Year");
			else printf("Not Leap Year");
		}
		else printf("Leap Year");
	}
	else {
		printf("Not Leap Year");
	}
	return 0;
}
