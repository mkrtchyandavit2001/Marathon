#include <stdio.h>

int main(){

	int num = 0;
	int reversed = 0;

	scanf("%d", &num);

	if(num > 12){
		while (num != 0) {
	        	int digit = num % 10;
	        	reversed = reversed * 10 + digit;
	        	num /= 10;
		}
	}

	printf("%d\n", reversed);


return 0;
}
