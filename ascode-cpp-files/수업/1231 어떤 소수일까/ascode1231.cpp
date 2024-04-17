/*http://ascode.org/problem.php?id=1231

입력 설명
맨 처음 테스트 케이스의 개수 T(1 <= T <= 100)를 입력 받는다.
 그 뒤에 테스트 케이스의 개수만큼 분자 A와 분모 B를 입력 받는다.
  (1 <= A < B <= 1,000,000)

출력 설명
각 테스트 케이스마다 분수를 소수로 변환하였을 때 
유한소수이면 'Limited'를 무한소수이면 'Unlimited'를 출력한다.

*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int D(int A, int B){
  int N[10];//무한소수의 나머지 저장용 배열
  if((A*10000000)%B==0){
    return 1;
  }

  for(int i=0; i<10; i++){//무한이면 return 0으로 함수 나가기
  if(N[A%B]==1){
    return 0;
  }
    N[A%B]=1;
    A=A%B;
  }

  return 1;
}

int main() {
FASTOUT
int T;
int A, B;
cin >> T;

for(int i=0; i<T; i++){
cin >> A >> B;
if(D(A, B)==1){
  cout <<"Limited\n";
}
else if(D(A, B)==0){
  cout << "Unlimited\n";
}
}

}