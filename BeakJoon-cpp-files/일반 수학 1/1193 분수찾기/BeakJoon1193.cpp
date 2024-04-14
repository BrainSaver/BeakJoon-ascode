/*https://www.acmicpc.net/problem/1193

문제
무한히 큰 배열에 다음과 같이 분수들이 적혀있다.

1/1	1/2	1/3	1/4	1/5	…
2/1	2/2	2/3	2/4	…	…
3/1	3/2	3/3	…	…	…
4/1	4/2	…	…	…	…
5/1	…	…	…	…	…
…	…	…	…	…	…
이와 같이 나열된 분수들을 1/1 → 1/2 → 2/1 → 3/1 → 2/2 → … 과 같은
지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.

X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 X(1 ≤ X ≤ 10,000,000)가 주어진다.

*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;


int main() {
    FASTOUT
    int X;
    int factorial=1;//몇 번째 팩토리얼인가
    int num=0;//가장 큰 수
    cin >> X;
    if(X==1){
        cout << "1/1\n";
        return 0;
    }

    while(X > num){
        num += factorial++;
    }
    //cout << num <<"\n\n\n";
    if(factorial%2==0){//짝수일 경우
        cout << 1+(num-X) << "/" << factorial-(num-X+1) <<"\n";
    }
    else if(factorial%2==1){//홀수일 경우
        cout << factorial-(num-X+1) << "/" << 1+(num-X) <<"\n";
    }
    
}