#include <stdio.h>

int main(){

	int menu[5];
	int i ;
	int burger_min = 2001;
	int drink_min = 2001;

	for(i = 0 ; i < 3 ; i ++){
	
		scanf("%d", &menu[i]);
		if((menu[i] > 99 && menu[i] < 2001) && burger_min > menu[i])
			burger_min = menu[i];
	}

	for(;i < 5 ; i++){
		scanf("%d", &menu[i]);
		if((menu[i] > 99 && menu[i] < 2001) && drink_min > menu[i])
			drink_min = menu[i];
	}

	printf("%d\n", burger_min + drink_min - 50);
		


}
