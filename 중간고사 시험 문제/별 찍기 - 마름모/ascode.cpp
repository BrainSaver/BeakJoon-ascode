#include <iostream>
#pragma warning(disable: 4996)

using namespace std;

int main() {
    int star, testcase;
    cin >> testcase;

    while (testcase--) {

    cin >> star;

    for (int i = 0; i < star; i++) {
        for (int a = star - 1; a > i; a--) {
            cout << " ";
        }
        for (int a = 0; a < i + 1; a++) {
            cout << "*";
        }

        for (int a = 1; a < i + 1; a++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int b = 0; b < star - 1; b++) {
        for (int o = 0; o < b + 1; o++) {
            cout << " ";
        }
        for (int p = star - 1; p > b; p--) {
            cout << "*";
        }

        for (int p = star - 2; p > b; p--) {
            cout << "*";
        }
        cout << "\n";
    }
    }

    return 0;
}