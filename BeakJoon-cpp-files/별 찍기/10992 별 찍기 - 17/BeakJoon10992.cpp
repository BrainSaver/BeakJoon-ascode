/*https://www.acmicpc.net/problem/10992*/
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcase;
    cin >> testcase;

    for (int a = 0; a < testcase - 1; a++) {
        cout << " ";
    }
    cout << "*\n";

    for (int a = 0; a < testcase - 2; a++) {
        for (int b = 0; b < testcase - a - 2; b++) {
            cout << " ";
        }
        cout << "*";

        for (int c = 0; c < a * 2 + 1; c++) {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
    }
    if (testcase != 1) {
    for (int a = 0; a < testcase * 2 - 1; a++) {
        cout << "*";
    }
    }
}