#include <stdio.h>

int main(){
	
	int num[3];

	for(int i = 0 ; i < 3; i++)
		scanf("%d", &num[i]);

	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 2 ; j ++){
			
			if(num[i] < num[j]){
				int tmp = num[j];

				num[j] = num[i];
				num[i] = tmp;
			}
		}
	}

	printf("%d\n", num[1]);
}
