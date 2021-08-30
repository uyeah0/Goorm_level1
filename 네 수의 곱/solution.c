#include <stdio.h>

int mul(int a,int b){
	return a*b;
}
int main() {
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int mult = mul(mul(a,b),mul(c,d));
	printf("%d", mult);
	return 0;
}
