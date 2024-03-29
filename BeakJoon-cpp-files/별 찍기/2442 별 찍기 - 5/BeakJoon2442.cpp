#include <iostream>
#pragma warning(disable: 4996)

using namespace std;

int main() {
    int star;

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


    return 0;
}