/*http://ascode.org/problem.php?id=1432*/
/*
다음 그림은 피타고라스의 정리를 의미하는 그림과 수식이다.
빗변의 최대 길이가 주어질 경우 빗변 길이 이하의 피타고라스의 정리를 만족하는
 모든 삼각형에 대한 정수 a, b, c 값을 출력하는 프로그램을 작성하시오.

입력 설명
직각삼각형을 이루는 빗변의 최대값(m)이 정수로 주어진다.(10 <= m <=500)
출력 설명
최대 길이의 빗변 이하에서 피타고라스의 정리를 만족하는 삼각형의 세 변의 길이
 a, b, c(정수)를 출력 예시와 같이 한 줄에 하나씩 출력한다(단, a <= b<= c 이고
  출력 순서는 a값의 오름차순, a값이 같은 경우에는 b값의 오름차순,
   b값이 같은 경우에는 c값의 오름차순 순으로 출력).
*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
short m;
cin >> m;

for(int i=1; i<=m; i++){
    for(int j=i; j<=m; j++){
        for(int k=j; k<=m; k++){
            if( (i*i) + (j*j) == (k*k)){
            cout << i << ", " << j << ", " << k <<"\n";
            }
        }
    }
}
}