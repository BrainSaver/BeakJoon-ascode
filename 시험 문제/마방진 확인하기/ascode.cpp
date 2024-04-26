/*http://ascode.org/problem.php?id=1387*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTOUT
        int magicsquare[3][3];
    int testcase;
    cin >> testcase;

    while (testcase--) {
        bool isMagic = true;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> magicsquare[i][j];
            }
        }

        //가로 판단
        for (int i = 0; i < 3; i++) {
            int total = 0;
            for (int j = 0; j < 3; j++) {
                total += magicsquare[i][j];
            }
            if (total != 15) {
                isMagic = false;
            }
        }

        //세로 판단
        for (int i = 0; i < 3; i++) {
            int total = 0;
            for (int j = 0; j < 3; j++) {
                total += magicsquare[j][i];
            }
            if (total != 15) {
                isMagic = false;
            }
        }

        //대각선 판단
        if (magicsquare[0][0] + magicsquare[1][1] + magicsquare[2][2] != 15) {
            isMagic = false;
        }
        if (magicsquare[0][2] + magicsquare[1][1] + magicsquare[2][0] != 15) {
            isMagic = false;
        }

        if (isMagic) {
            cout << "Magic Square!\n";
        }
        else {
            cout << "No Magic Square!\n";
        }
    }

}