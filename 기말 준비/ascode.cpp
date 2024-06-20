/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
using namespace std;
#define MAX 0
#define MIN 1

int main() {
int testcase;
int dice[2][3];
cin >> testcase;

while(testcase--){
    int twincnt[2]={0, };
    int mM[2][2] = {{0, 7}, {0, 7}};
    cin >> dice[0][0] >> dice[0][1] >> dice[0][2];
    cin >> dice[1][0] >> dice[1][1] >> dice[1][2];
    for(int i=0; i<3; i++){
        if(dice[0][i]%2 == 0){
            twincnt[0]++;
        }
        if(dice[1][i]%2 == 0){
            twincnt[1]++;
        }
        mM[0][MAX] = max(mM[0][MAX], dice[0][i]);
        mM[1][MAX] = max(mM[1][MAX], dice[1][i]);
        mM[0][MIN] = min(mM[0][MIN], dice[0][i]);
        mM[1][MIN] = min(mM[1][MIN], dice[1][i]);
    }
    if(mM[0][MAX]-mM[0][MIN] > mM[1][MAX]-mM[1][MIN]){
        cout << "Jiwon wins.\n";
    }
    else if(mM[0][MAX]-mM[0][MIN] < mM[1][MAX]-mM[1][MIN]){
        cout << "Seungwhan wins.\n";
    }
    else{
        if(twincnt[0]>twincnt[1]){
        cout << "Jiwon wins.\n";
        }
        else if(twincnt[0]<twincnt[1]){
        cout << "Seungwhan wins.\n";
        }
        else{
            cout << "Draw!\n";
        }
    }

}

}