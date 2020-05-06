#include <stdio.h>

int main(){
	
	int H, M;

	scanf("%d %d", &H, &M);

	if((H > 24 || M > 60) && (H < 0 && M < 0)) return 0;
	if(M - 45 >= 0)
		printf("%d %d \n", H, M - 45 );
	else if(M - 45 <  0){
		if(H == 0) H = 24; 
		printf("%d %d\n", H - 1,( M - 45) + 60 );
	}
}
