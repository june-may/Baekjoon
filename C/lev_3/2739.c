#include <stdio.h>

int main(){
	int N;
	int i;

	scanf("%d", &N);

	if(N>0 && N<10){
		for(i=1;i<10;i++){
			printf("%d * %d = %d\n",N,i,N*i);
		}  
	}     
	return 0;
}
