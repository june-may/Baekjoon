#include <stdio.h>

int main()		{
	int A,B;
	int num;

	scanf("%d", &num);

	for(int i=0;i<num;i++){
		scanf("%d %d", &A,&B);

		if(A>0 && B<10){
			printf("%d\n", A+B);
		}
	}

	return 0;
}
