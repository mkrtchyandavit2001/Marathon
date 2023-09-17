#include <stdio.h>

int main(){

	int num = 0;

	scanf("%d", &num);

	if((num & (1 << 4)) == 0){
		(num & (1 << 4)) = 1;
		printf("%d", num);
	}else{
		printf("%d", num);
	}

return 0;
}
