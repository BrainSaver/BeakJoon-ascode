/*http://ascode.org/problem.php?id=1256*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;
/*4이상의 어떠한 짝수라도 2개의 소수의 합으로 표현이 가능하다는 추측
가장 큰 거 찾으면 바로 break
0들어오면 프로그램 끝냄
*/

//에라토스테네스의 체
const int LIMIT = 1000001;//배열 100만
bool b[LIMIT] = { 1, 1, 0 }; // 3번째부터 모두 0으로 초기화
void prime_init() {
	int sqrtlimit = (int)sqrt((double)LIMIT);
	for (int i = 2; i <= sqrtlimit; i++) {
		if (!b[i]) { // 아직 체크되지 않은 경우
			for (int j = i * i; j < LIMIT; j = j + i) {
				// i * i 이후의 모든 배수를 소수가 아닌 것으로 체크
				b[j] = 1;
			}
		}
	}
}


int main() {
	FASTOUT
		prime_init();

	int test=1;
	while (1) {
		if (test == 0) {
			break;
		}

		cin >> test;
		int testcase=test/2;
		int count = 0;
		for (int i = 0; i <= testcase; i++) {
			if (b[test]==1 && b[i]==0 && b[test-i]==0) {
				count++;
			}
		}
		if(count!=0){
		cout << count <<'\n';
		}
	}
}