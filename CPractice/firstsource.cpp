#include <stdio.h>
int main() {
	int N, X, K, Ai, Bi;
	char arr[N];
	scanf_s("%d %d %d", &N, &X, &K);

	for (int i = 0; i < K; i++) {
		scanf_s("%d %d", &Ai, &Bi);
	}
	for (int i = 0; i < N; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		printf("%d", arr[i]);
	}
}