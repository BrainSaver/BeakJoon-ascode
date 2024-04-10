/*https://www.acmicpc.net/problem/2869*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTOUT
    int A, B, V; // 올라가는 거리, 미끄러지는 거리, 목표거리
    cin >> A >> B >> V;
    
    int day = (V - B - 1) / (A - B) + 1;
    cout << day << "\n";
    
    return 0;
}
