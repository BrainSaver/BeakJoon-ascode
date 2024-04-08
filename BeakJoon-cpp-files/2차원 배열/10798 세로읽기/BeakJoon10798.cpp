#include <iostream>
#include <string>

using namespace std;

int main() {
    string S[5];
    int max_length = 0;

    // 입력받은 문자열 중 가장 긴 길이를 찾음
    for (int a = 0; a < 5; a++) {
        getline(cin, S[a]);
        if (S[a].length() > max_length)
            max_length = S[a].length();
    }

    // 모든 문자열을 같은 길이로 만들기 위해 빈 공간 추가
    for (int a = 0; a < 5; a++) {
        int padding = max_length - S[a].length();
        S[a] += string(padding, ' ');
    }

    // 세로로 출력
    for (int b = 0; b < max_length; b++) {
        for (int a = 0; a < 5; a++) {
            if(S[a][b]!=' ')
            cout << S[a][b];
        }
    }

    return 0;
}
