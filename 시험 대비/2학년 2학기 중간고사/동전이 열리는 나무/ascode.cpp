/*http://ascode.org/problem.php?id=1426*/
#include <iostream>
using namespace std;
//A 65
int main() {
    int testcase, tsize;
    cin >> testcase;

    while (testcase--) {
        cin >> tsize;

        for (int ii = 0; ii < tsize; ii++) {

            for (int i = ii; i < tsize - 1; i++) {//공백 출력
                cout << ' ';
            }
            for (int j = 0; j < ii + 1; j++) {//증가 알파벳 출력
                cout << char(j + 65);
            }
            for (int j = ii; j > 0; j--) {//감소 알파벳 출력
                cout << char(j + 64);
            }
            cout << '\n';
        }

        for (int i = tsize - 1; i > 0; i--) {

            for (int k = i; k < tsize; k++) {//공백 출력
                cout << ' ';
            }

            for (int j = 0; j < i; j++) {
                cout << char(j + 65);
            }

            for (int j = i; j > 1; j--) {
                cout << char(j + 63);
            }
            cout << '\n';
        }

    }
}