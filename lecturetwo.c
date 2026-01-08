#include <stdio.h>


void uppercase(char str[]){
for(int i=0;str[i]!='\0'; i++){
	if(str[i]>=97 && str[i]<=122){
	char c = str[i];
	printf("%c",c-32);
	}
printf("\n");	
}
}
int main(){
char string[] = "hello";
uppercase(string);
}
