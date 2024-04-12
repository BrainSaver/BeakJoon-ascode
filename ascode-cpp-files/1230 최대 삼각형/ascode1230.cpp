/*http://ascode.org/problem.php?id=1230

문제 설명
N개의 봉이 있다. 이 봉들 중에서3개를 선택하여 삼각형을 만들려고 한다.
 이 때 만들어 질 수 있는 삼각형들 중에 둘레의 길이가 가장 긴 삼각형을 찾으려고 한다.
  이 경우 찾아진 삼각형 둘레 길이의 최대값을 출력하는 프로그램을 작성하라.

입력 설명
첫 줄에는 테스트 케이스 수 T(1 <= T <= 10)가 입력된다.
 다음 줄부터 봉의 개수N(3<= N <= 10,000)이 입력되고
  그 다음 줄에 봉의 길이(1 <= 봉의 길이<= 5,000) N개가T 만큼 반복해서 주어진다.

출력 설명
각 테스트 케이스 별로 찾아진 삼각형 둘레 길이의 최대값을 한 줄에 하나씩 출력한다.
 만약 주어진 봉들로 삼각형이 만들어질 수 없는 경우에는 0을 출력한다.

*/
#include <iostream>
#include <algorithm>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
int stick[10000] = {0, };

cin >> testcase;
while(testcase--){
    int N=0;
    cin >> N;// 3<= N <= 10000

    for(int i=0; i<N; i++){//봉 길이 입력
        cin >> stick[i];
    }

    sort(stick, stick + N, greater<int>());

    int M=0;

    for(int i=0; i<N-2; ++i){
        if(stick[i] < stick[i+1] + stick[i+2]){
        M = stick[i] + stick[i+1] + stick[i+2];
        break;
        }
    }

    cout << M <<'\n';
}
}