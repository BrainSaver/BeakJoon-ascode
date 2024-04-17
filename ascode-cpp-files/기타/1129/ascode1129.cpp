/*http://ascode.org/problem.php?id=1129

문제 설명
길이를 나타내는 단위로는 mm, cm, m, km 등이 있다. 임의의 길이와 단위가 함께 입력될 경우
 그 길이를 mm 단위의 정수(소수점 이하 버림)로 변환하여 출력하는 프로그램을 작성하시오. 

입력 설명
첫 쨰줄에 테스트케이스 T가 입력된다.(1<= T <= 10)
두 쨰줄 부터 T개 만큼 길이값과 단위가 소문자로 입력된다.  입력되는 길이값의 범위는 0.0 이상 150.0 이하이다.
또한, 입력되는 길이 값은 소수점 이하 3째 자리까지 입력될 수 있다.
출력 설명
mm로 변환된 정수값을 한 줄에 하나씩 출력한다.

*/
#include <iostream>
#include <string>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
cin >> testcase;

for(int i=0; i<testcase; i++){
double N;
string what;
cin >> N >> what;

if(what == "m"){
    cout << (int)(N*1000) << "\n";
}
else if(what == "cm"){
    cout << (int)(N*10) <<"\n";
}
else if(what == "km"){
    cout << (int)(N*1000000) <<"\n";
}
else{
    cout << (int)N << "\n";
}
}
}