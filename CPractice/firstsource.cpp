#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, X, K, Ai, Bi, tmp;
	int* arr;
	scanf_s("%d %d %d", &N, &X, &K);

	arr = (int*)malloc(sizeof(int) * N +1);
	for (int i = 0; i < N; i++)
	{
		arr[i] = 0;
	}
	arr[X - 1] = 1;
	for (int i = 0; i < K; i++) {
		scanf_s("%d %d", &Ai, &Bi);
		tmp = arr[Ai - 1];
		arr[Ai - 1]= arr[Bi - 1];
		arr[Bi - 1] = tmp;
	}
	printf("%d", arr[0]);

	free(arr);
	return 0;
}
/*for (int i = 0; i < K; i++) {
		scanf_s("%d %d", &Ai, &Bi);
	}*/