/*https://www.acmicpc.net/problem/10872  */
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
long long N;

cin >> N;
long long total = 1;
for(int i = 1; i < N+1; i++){
total *= i;
}
cout << total <<"\n";
}