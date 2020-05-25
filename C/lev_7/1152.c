#include <stdio.h>
#include <string.h>

int main(){

	char str[1000000];
	int num = 0;

	fgets(str, 1000000, stdin);

	for(int i = 0 ; i < strlen(str); i++){
		if(str[i] == ' ')
			num++;
	}

	printf("%d\n",num+1);

}
