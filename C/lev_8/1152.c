#include <stdio.h>
#include <string.h>

int main(){

	char str[1000000];
	int num = 0 ;

	gets_s(str, 1000000);

	for(int i = 0 ; str[i] != '\0'; i++){
		if(str[i] == ' ')
			num++;
	}
}
