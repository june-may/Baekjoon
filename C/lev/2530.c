#include <stdio.h>

int main(){

	int h;
	int m;
	int s;
	int clock;

	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &clock);
	
	s += clock;
	m += s / 60 ;
	h += m / 60;

	printf("%d %d %d\n", h%24, m%60, s%60);
}
