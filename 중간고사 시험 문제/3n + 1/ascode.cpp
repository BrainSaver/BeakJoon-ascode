/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
/*임의의 양의 정수 a, b가 주어질 때 그 사이에 존재하는 모든 정수 n에 대한 수열의 길이 m들 중에
가장 큰 값과 그 값을 산출한 n이 무엇인지를 함께 출력하는 프로그램을 작성해 보자.
만약 수열의 최대 길이가 동일한 n이 2개 이상 존재할 경우에는 가장 작은 n을 출력한다.*/

void Tn1(int m1, int m2) {
    int score = 0;
    int  n = 0, m = 0;//가장 큰 수열의 번호, 산출값

    for (int i = m1; i <= m2; i++) {
        score = i;
        int  nn = i, mm = 1;//해당 수열의 번호, 산출값
        if (m1 < 0) {
            m1 = 0;
        }
        if (m2 < 0) {
            m2 = 0;
        }
        while (score != 1) {
            if (score % 2 == 1) {//홀수인 경우
                score = score * 3 + 1;// *3+1을 해줌
                mm++;
            }
            else if (score % 2 == 0) {//짝수인 경우
                score /= 2;//2로 나눔
                mm++;
            }
        }
        if (mm > m) {//최대값인 경우만 값 변경
            n = nn;
            m = mm;
        }
    }
    cout << n << ' ' << m << '\n';
}

int main() {
    FASTOUT
        int testcase;
    cin >> testcase;

    while (testcase--) {
        int m1, m2;
        cin >> m1 >> m2;
        if (m1 > m2) {
            int temp = m1;
            m1 = m2;
            m2 = temp;
        }
        Tn1(m1, m2);
    }
}