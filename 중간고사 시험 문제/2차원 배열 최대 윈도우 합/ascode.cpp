/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#include <climits>
using namespace std;

// 배열 크기
int wh[300][300];

int main() {
    int testcase;
    cin >> testcase;

    while (testcase--) {
        int w, h; // 가로와 세로
        cin >> w >> h; // 배열 크기 입력

        // 2차원 배열 입력
        for (int i = 0; i < h; i++) { // 행 반복
            for (int j = 0; j < w; j++) { // 열 반복
                cin >> wh[i][j]; // 배열 입력
            }
        }

        int s; // 윈도우 크기
        cin >> s; // 윈도우 크기 입력

        int best = INT_MIN; // 최대 합

        // 윈도우의 합 계산
        for (int i = 0; i <= h - s; i++) { // 행 범위
            for (int j = 0; j <= w - s; j++) { // 열 범위
                int sum = 0; // 각 윈도우의 합
                for (int x = 0; x < s; x++) { // 윈도우 행
                    for (int y = 0; y < s; y++) { // 윈도우 열
                        sum += wh[i + x][j + y]; // 합 계산
                    }
                }
                if (sum > best) { // 최대 합 갱신
                    best = sum;
                }
            }
        }

        // 결과 출력
        cout << best << endl;
    }

    return 0;
}
