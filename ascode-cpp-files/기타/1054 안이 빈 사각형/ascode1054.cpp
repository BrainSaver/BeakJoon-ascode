/*http://ascode.org/problem.php?id=1054*/
#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int x, y;
        cin >> x >> y;

        for (int j = 0; j < y; j++) {
            for (int k = 0; k < x; k++) {
                if (j == 0 || j == y - 1 || k == 0 || k == x - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}