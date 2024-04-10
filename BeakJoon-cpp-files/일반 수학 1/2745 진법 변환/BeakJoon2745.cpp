/*https://www.acmicpc.net/problem/2745*/

/*
문제
B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.

10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.

A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35

입력
첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36)

B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.

출력
첫째 줄에 B진법 수 N을 10진법으로 출력한다.
*/

#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
    string N;
    int B;
    cin >> N >> B;
    int sum(0);
    
    for(int i=0; i<N.size(); i++){
        int num = N[i];
        if(num>10){
            if(num>=65 && num<=90){
            num=N[i]-55;
            }
            else if(num>=48 && num<=57){
            num=N[i]-48;
            }
        //cout << num << "\n";
        }
        sum += num*pow(B, N.size()-1-i);
    }


        cout << sum;
    }