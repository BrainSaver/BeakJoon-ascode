#include <iostream>
#pragma warning(disable : 4996)
using namespace std;
    int V[100][100];

    int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcase;

    cin >> testcase;

    int x = 0, y = 0;
    for (int i = 0; i < testcase; i++) {
        cin >> x >> y;
        for (int a = x; a < x + 10; a++) {
            for (int b = y; b < y + 10; b++) {
                V[a][b] = 1;
            }
        }
    }

    int S = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (V[i][j] == 1) {
                S++;
            }
        }
    }
        cout << S;
}