#include <stdio.h>

int main(){

	char ch[5];
	int vowel = 0;
	int consonant = 0;
	scanf("%s", &ch[5]);

	for(int i = 0; i <=0; ++i){
		if(ch[i] >= 65 && ch[i] <= 90 || ch[i] >= 97 &&  ch[i] <= 122){
			if(ch[i] == 65 || ch[i] == 69 || ch[i] == 73 || ch[i] == 79 || ch[i] == 85 || ch[i] == 89 ||  ch[i] == 97 || ch[i] == 101 || ch[i] == 105 || ch[i] == 111 || ch[i] == 117 || ch[i] == 121){
				vowel += 1;	
			}
			else{
				consonant += 1;
			}
		}
	}
	
	printf("Number of vowels %d", vowel);
	printf("Number of consonants %d", consonant);	

return 0;
}
