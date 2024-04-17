/*http://ascode.org/problem.php?id=1163*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
cin >> testcase;

while(testcase--){
    int re, num;
    int m=0, M=0;
    cin >> re;
    while(re--){
        cin >> num;
        if(num > 0){
            M++;
        }
        else if(num < 0){
            m++;
        }
    }
    cout << m << " " << M << "\n";
}
}