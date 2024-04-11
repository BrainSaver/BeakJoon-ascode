/*http://ascode.org/problem.php?id=1270*/

/*
입력 설명
전체 입력의 첫 번째 줄은 테스트 케이스의 개수를 나타내는 정수 T가 주어진다.
각 테스트 케이스의 첫 번째 줄에는 지하철의 개수를 나타내는 정수 N과
 투자할 돈을 나타내는 정수 M이 주어진다.
 cin >> N >> M;// 지하철 수, 예산
  두 번째 줄에는 각 지하철의 현재 최대 속력을 나타내는
정수  Si가 주어지고,
cin >> Si[N];
 세 번째 줄에는 각 지하철의 1원 당 속도 증가량을 나타내는 정수 Vi가 주어진다.
제약조건

T <= 100
1 <= N <= 100     지하철의 개수 최대 100개
1 <= M <= 30,000  투자액
1 <= Si <= 100    현재 최대 속력
1 <= Vi <= 100    1원당 증가하는 속력

(지하철 개수: N) (예산: M)
(지하철 현재 속력: Si) * (지하철 개수: N)
(지하철 증가 속력: Vi) * (지하철 개수: N)
>> (2호선 지하철의 가능한 최대 속력)
*/


#include <iostream>
using namespace std;
int main() {
    int testcase;
    int N;//지하철 수
    int M;//투자액 
    int Si[100] = { 0, };//현재 최대속도
    int Vi[100] = { 0, };//증가속도

    cin >> testcase;
    for (int i = 0; i < testcase; i++) {

        cin >> N >> M;//지하철 개수, 예산 입력받음

        for (int i = 0; i < N; i++) { // 지하철의 현재 최대속력 입력받음
            cin >> Si[i];
        }

        for (int i = 0; i < N; i++) { // 지하철의 증가 속력 입력받음
            cin >> Vi[i];
        }

            while(M--){//투자 수만큼 반복
        int min=0;//가장 느린 지하철의 속력, 초기값은 최대 속력인 100

        // 느린 지하철을 찾아냄
        for(int j = 0; j < N; j++){//지하철 수만큼 반복
            if(Si[min] > Si[j]){//가장 느린 지하철을 찾음
                min = j; //가장 느린 지하철의 속력을 저장
            }
        }
        //for이 끝나고 가장 느린 지하철에 1 투자함
            Si[min] +=Vi[min];//가장 느린 지하철에 1만큼 투자함
         }

        int output=Si[0];
        for(int k = 1; k < N; k++){
            if(Si[k] < output){
                output = Si[k];
            }
        }
        cout << output << '\n';
        }

    return 0;
}
