#include <stdio.h>

int main(){
	
	int x, y;

	scanf("%d %d", &x, &y);

	if((x < -1000 || x > 1000) && x != 0) return 0;
	if((y < -1000 || y > 1000) && y != 0) return 0;
	
	printf("Quadrant ");

	if (x > 0 && y > 0)
		printf("1 \n");
	else if (x < 0 && y > 0)
		printf("2 \n");
	else if (x < 0 && y < 0)
		printf("3 \n");
	else
		printf("4 \n");

}
