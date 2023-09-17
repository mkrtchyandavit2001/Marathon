#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;

	scanf("%d", &num1);
	scanf("%d", &num2);

	if(num1 % num2 == 0 || num2 % num1 == 0){
		printf("Tvery karokh en bajanvel:");
	}else{
		printf("Tvery chen karokh bajanvel:");
	}

return 0;
}
