#include <stdio.h>
#include <math.h>
int main() {
	int a,b;
	double r = 0.0;
	int d;
	scanf("%d %d", &a,&b);
	scanf("%d", &d);
	
	for(int i =1; i <= d; i++){
		if(i%2!=0){//진우우
			if(a%2==0){
				a /= 2;
				b += a;
			}else{
				r = ceil((double)a/2.0);
				b += r;
				a /= 2;
			}
		}else{ // 선우
			if(b%2==0){
				b /= 2;
				a += b;
			}else{
				r = ceil((double)b/2);
				a += r;
				b /= 2;
			}
		}
	}
		
	printf("%d %d", a,b);
	return 0;
}
