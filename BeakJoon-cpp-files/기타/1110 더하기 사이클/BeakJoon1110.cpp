/*https://www.acmicpc.net/problem/1110 
26부터 시작한다.
   2+6 = 8이다. 새로운 수는 68이다.
  6+8 = 14이다. 새로운 수는 84이다.
  8+4 = 12이다. 새로운 수는 42이다.
  4+2 =  6이다. 새로운 수는 26이다.
  4번만에 한 원래 수로 돌아옴
 */
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int N, a, b;
int count=0;
cin >> N;
int NC = N;
while(1){//55 들어가면
a = N/10; // 5
b = N%10; // 5
if(a+b>=10){
N = b*10 + (a+b)%10; 
}
else{
N = b*10 + (a+b);
}
count++;
if(N==NC){
    break;
}
}

cout << count <<"\n";

}