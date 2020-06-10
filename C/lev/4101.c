#include <stdio.h>

int main(){
	
	while(1){
		int fir, sec;
		scanf("%d %d", &fir, &sec);
		
		if(fir == 0 && sec == 0) return 0;

		if(fir > sec)
			printf("Yes\n");
		else
			printf("No\n");
	}

}
