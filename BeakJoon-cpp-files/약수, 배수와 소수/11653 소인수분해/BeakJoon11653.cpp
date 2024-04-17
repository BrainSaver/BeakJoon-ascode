/*https://www.acmicpc.net/problem/11653 
첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.
 */

#include <iostream>
#pragma warning(disable : 4996)
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTOUT
  int n; cin >> n;

  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      cout << i << "\n";
      n /= i;
    }
  }

  if (n > 1) cout << n << "\n";

  return 0;
}