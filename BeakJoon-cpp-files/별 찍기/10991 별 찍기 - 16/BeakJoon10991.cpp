/*https://www.acmicpc.net/problem/10990*/
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcase;
    cin >> testcase;
    testcase++;
    for (int a = 0; a < testcase-1; a++) {
        for (int b = 0; b < testcase - a - 2; b++) {
            cout << " ";
        }

        for (int c = 0; c < a; c++) {
            cout << "* ";
        }
        cout << "*";
        cout << "\n";
    }
}