#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int testcase;
    cin >> testcase;

    if (testcase == 1) {
        cout << "*";
        return 0;
    }

    for (int a = 0; a < testcase; a++) {
        if (a % 2 == 0) {
            for (int fora = 0; fora < testcase - 1; fora++) {
                cout << "* ";
            }
            cout << "*";
        }
        if (a % 2 == 1) {
            for (int fora = 0; fora < testcase; fora++) {
                cout << " *";
            }
        }
        cout << "\n";
    }
}