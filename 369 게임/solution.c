#include <stdio.h>
int main() {
	int input;
	int cnt =0;
	scanf("%d",&input);
	for(int i = 1; i < input; i++){
		int k = i;
		while(1){
			if( k < 10 ){
				if( k == 3 || k == 6 || k ==9) cnt++;
				break;
			}else{
				if( k %10 == 3 || k%10 ==6 || k%10==9){
					cnt++;
				}
				k /= 10;
			}	
		}
		
	}
	printf("%d", cnt);
	return 0;
}
