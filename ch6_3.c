#include <stdio.h>
main(){
	printf("1~100사이의 소수:");
	printf("1 ");
	int i, j;
	for (i = 2; i <= 100; i++){
		for (j = 2; j <= i; j++){
			if (i % j == 0)
                break;
		}
		if (i == j)
		printf("%d ", i);
	}
	return 0;
}
