#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, X, K, Ai, Bi;
	int* arr;
	scanf_s("%d %d %d", &N, &X, &K);

	/*for (int i = 0; i < K; i++) {
		scanf_s("%d %d", &Ai, &Bi);
	}*/
	arr = (int *)malloc(sizeof(int) * X);
	for (int i = 0; i < X; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < X; i++)
	{
		printf("%d ", arr[i]);
	}

	free(arr);
	return 0;
}