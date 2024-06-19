/*http://ascode.org/problem.php?id=1237*/
#include <iostream>
#include <algorithm>
using namespace std;

int cycleLength(int n) {
    int length = 1;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        length++;
    }
    return length;
}

int maxCycleLength(int i, int j) {
    int maxLength = 0;
    for (int n = min(i, j); n <= max(i, j); n++) {
        maxLength = max(maxLength, cycleLength(n));
    }
    return maxLength;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        cout << i << " " << j << " " << maxCycleLength(i, j) << endl;
    }
    return 0;
}
