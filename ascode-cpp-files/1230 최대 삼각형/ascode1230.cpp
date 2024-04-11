#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T= 0, N=0;
    int arr[10000];
    

    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> N;
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
        }
        int trimax = 0;
        for (int i = 0; i < N-2; i++) {
            for (int j = i+1; j < N-1; j++) {
                for (int k = j+1; k < N; k++) {
                    int a = arr[i], b = arr[j],c = arr[k];
                    if ((a + b > c) &&(a + c > b)&&(b + c > a)) {
                        trimax = max(trimax, a + b + c);
                    }
                }
            }
        }
        if (trimax == 0) {
            cout << 0 << "\n";
        }
        else{
            cout << trimax << "\n";
        }

    }
    return 0;
}