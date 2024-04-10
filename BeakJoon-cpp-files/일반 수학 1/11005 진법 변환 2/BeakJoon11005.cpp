#include <stdio.h>

void F(int N, int X)
{
	if (N == 0)
		return;

	F(N / X,X);

	if (N % X >= 10)
		printf("%c", 'A' + N % X - 10); // X가 10보다 큰 경우를 처리하기 위해서
	else
		printf("%d", N % X);
}

int main(){
	int N, X;

	scanf("%d %d", &N, &X);

	F(N, X);
}