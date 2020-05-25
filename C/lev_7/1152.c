#include <stdio.h>
#include <string.h>

int main(){

	char str[1000000];
	int num = 0;
	int check = 1;

	fgets(str, 1000000, stdin);

	for(int i = 0 ; i < strlen(str); i++){
			
		if(str[i] == ' ')
			check = 1;
		else if(check){
			num ++;
			check = 0;
		}	
	}
	printf("%d\n", num);
}
