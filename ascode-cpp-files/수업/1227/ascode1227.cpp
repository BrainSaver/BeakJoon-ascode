/*http://ascode.org/problem.php?id=1227*/

#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int getMax(int arr[], int N, int &start, int &fin) {
    int best = 0;
    int sum = 0;
    int cur_start = 0;

    for (int i = 0; i < N; ++i) {
        sum += arr[i];
        if (sum > best) {
            best = sum;
            start = cur_start;
            fin = i;
        }
        if (sum < 0) {
            sum = 0;
            cur_start = i + 1;
        }
    }
    return best;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int N;
        int e[500];
        cin >> N;
        for (int a = 0; a < N; a++) { // 원소 입력받기
            cin >> e[a];
        }
        int start = 0, fin = 0;
        cout << getMax(e, N, start, fin) << " " << start + 1 << " " << fin + 1 << "\n";
    }
    return 0;
}
