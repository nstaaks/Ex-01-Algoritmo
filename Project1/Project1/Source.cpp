#include<stdio.h>
#include<stdlib.h>

int main() {
	int N;
	int NA;
	int NS;
	printf("Digite um numero:");
	scanf_s("%d", &N);

	NA = (N - 1);
	NS = (N + 1);
	printf("numero antecessor:%d,\nnumero digitado:%d,\nnumero sucessor:%d\n", NA, N, NS);
	system("pause");
	return 0;



}

