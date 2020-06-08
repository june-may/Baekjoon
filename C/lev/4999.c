#include <stdio.h>
#include <string.h>

int main(){


	char pt[1000];
	char dr[1000];

	scanf("%s", dr);
	scanf("%s", pt);
	
	if(strcmp(dr, pt) == 0) 
		printf("Yes\n");
	else
		printf("No\n");
}

