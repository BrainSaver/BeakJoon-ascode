#include <iostream>
#include <algorithm>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
int N[1000];
cin >> testcase;
for(int i = 0; i < testcase; i++){
    cin >> N[i];
}
sort(N, N+testcase);

for(int i = 0; i < testcase; i++){
    cout << N[i] << "\n";
}

}