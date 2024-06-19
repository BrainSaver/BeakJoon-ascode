/*http://ascode.org/problem.php?id=1227*/

#include <iostream>

using namespace std;

float e[1000];

void getmax(float arr[], int n) {
    float best = arr[0];
    float sum = 0;
    int min_num = 0;
    int max_num = 0;
    int temp_min_num = 0;

    for (int o = 0; o < n; o++) {
        sum += arr[o];

        if (best < sum){
            best = sum;
            min_num = temp_min_num;
            max_num = o;
        }

        if (sum <= 0) {
            sum = 0;
            temp_min_num = o + 1;
        }
    }
    cout << min_num + 1 << " " << max_num + 1 << " " << best << endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;

    cin >> T;
    for (int p = 0; p < T; p++) {
        cin >> N;
        if (N <= 3){
            N = 3;
        }
        else if(N >= 500) {
            N = 500;
        }
        for (int i = 0; i < N; i++) {
            cin >> e[i];
        }
        getmax(e,N);
    }


    return 0;
}