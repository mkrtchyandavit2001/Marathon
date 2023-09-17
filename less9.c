#include <stdio.h>

int main(){

	char sym = 0;

	scanf("%c", &sym); 

	if(sym > 65 && sym < 90){
		printf("%c", sym + 32);
	}

return 0;
}
