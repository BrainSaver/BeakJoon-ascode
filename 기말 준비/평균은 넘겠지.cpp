/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
int studentNum;
cin >> testcase;

while(testcase--){
    int avg = 0;
    int up = 0;
    int studentScore[1000];
    cin >> studentNum;
    for(int i=0; i<studentNum; i++){
        cin >> studentScore[i];
        avg+= studentScore[i];
    }
    avg /=studentNum;
    for(int i=0; i<studentNum; i++){
        if(studentScore[i] > avg){
            up++;
        }
    }
    cout << up << ' ' << "from total " << studentNum << '\n';
}
    
}