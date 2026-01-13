#include <stdio.h>

void inspect(char s[]){

	for(int i=0;s[i]!=0;i++){
		printf("(%c %hhu %d %hhb) ", s[i], s[i], s[i], s[i]);
	}
	printf("\n");

}

int main(){
char S[] = "Lalith Sasubilli";
inspect(S);

}
