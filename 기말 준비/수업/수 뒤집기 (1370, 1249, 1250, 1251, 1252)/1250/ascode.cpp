/*http://ascode.org/problem.php?id=1250*/
#include <iostream>
#include <string>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

void pal(string word) {//팬린드롬인지 확인
    int len = word.size();
    int out = 1;

    if (len > 1) {  // 길이가 1인 경우는 따로 처리
        for (int a = 0; a < len / 2; a++) {
            if (word[a] != word[len - a - 1]) {
                out = 0;
                break;
            }
        }
    }
    if (out == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}

int main() {
    FASTOUT
        int N, testcase;
    cin >> testcase;
    while (testcase--) {
        cin >> N;
        int origin = N;
        int reverse = 0;
        while (N > 0) {
            reverse = (reverse * 10) + (N % 10);
            N /= 10;
        }
        int NN = origin + reverse;
        string num = to_string(NN);
        //cout << num << "\n";

        pal(num);

    }
}