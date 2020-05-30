#include <stdio.h>

int main(){

	int N, M;
	int num[100];
	int max = 0;

	if(N < 3 || N > 100) return 0;
	if(M < 10 || M > 300000) return 0;

	for(int i = 0 ; i < N ; i++){
		for(int j = i + 1; j < N ; j++){
			for(int k = j + 1; k < N ; k++){
				int	sum = num[i] + num[j] + num[k];

				if(sum <= M && sum > max)
					max = sum;
			}
		}
	}

	printf("%d\n", max);

}
