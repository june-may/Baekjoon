#include <stdio.h>
#include <stdlib.h>

int main(){

	char str1[3], str2[3];
	char re_str1[3], re_str2[3];

	scanf("%s %s", str1, str2);
	
	int j = 2;
	for(int i = 0 ; i < 3 ; i++){
		re_str1[i] = str1[j];
		re_str2[i] = str2[j];
		j--;
	}

	if(atoi(re_str1) > atoi(re_str2))
		printf("%s\n", re_str1);
	else
		printf("%s\n", re_str2);

}

