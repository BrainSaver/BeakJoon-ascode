#include <iostream>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;

    for (int i = 1; i <= testcase; i++) {
        int n;
        cin >> n; 

        cout << "Case #" << i << ":" << endl;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << "*";
            }
            cout << endl;
        }

        for (int i = n - 1; i >= 1; --i) {
            for (int j = 1; j <= i; ++j) {
                cout << "*";
            }
            cout << endl;
        }

        cout<<endl;
    }

    return 0;
}