#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
	int num[9] = { 0, };
	int max = 0, love = 0;
	for (int a = 0; a < 9; a++) {
		scanf("%d", &num[a]);
		if (num[a] > max) {
			love = a, max = num[a];
		}
	}
	printf("%d\n%d", max, love + 1);
}