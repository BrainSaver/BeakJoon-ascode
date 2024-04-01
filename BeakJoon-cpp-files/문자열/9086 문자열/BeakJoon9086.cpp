#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
char input[1000];
char first[100];
int len = 0;

int main(void) {
	int testcase = 0;
	scanf("%d", &testcase);
	
	while (testcase--) {
		scanf("%s", input);
		len = strlen(input);
		first[0] = input[0];
		printf("%c", first[0]);
		printf("%c\n", input[len-1]);
	}

}