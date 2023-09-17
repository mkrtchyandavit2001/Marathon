#include <stdio.h>

int main(){

	char ch1 = 0;
	char ch2 = 0;

	scanf("%c ", &ch1);
	scanf("%c", &ch2);

	if(ch1 - ch2 == 32 || ch2 - ch1 == 32){
		printf("Tarery hamapataskhanum en:");
	}else{
		printf("Tarery chen hamapataskhanum:");
	}

return 0;
}
