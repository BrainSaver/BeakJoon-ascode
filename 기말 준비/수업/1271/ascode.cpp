/*http://ascode.org/problem.php?id=1271*/
#include <bits/stdc++.h>
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
        int min=0;//가장 느린 지하철의 속력

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