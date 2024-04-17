/*http://ascode.org/problem.php?id=1085*/
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcase;
    
    int play=0;

    cin >> play;

    while(play--){
    cin >> testcase;
    if(testcase%2==0){
        testcase = testcase/2 +1;
    }
    else{
    testcase/=2;
    }

    if (testcase != 1) {
        for (int a = 1; a < testcase; a++) {
            for (int fora = 0; fora < a; fora++) {
                cout << "*";
            }
            for (int forb = 0; forb < (testcase - a-1) * 2; forb++) {
                cout << " ";
            }
            for (int fora = 0; fora < a; fora++) {
                cout << "*";
            }
            cout << "\n";
        }

        for (int a = 0; a < testcase - 1; a++) {
            for (int fora = 0; fora < (testcase - a) - 1; fora++) {
                cout << "*";
            }
            for (int fora = 0; fora < (a) * 2; fora++) {
                cout << " ";
            }
            for (int fora = 0; fora < (testcase - a) - 1; fora++) {
                cout << "*";
            }
            cout << "\n";
        }

    }
    else if (testcase == 1) {
        cout << "**\n";
    }
    }

}