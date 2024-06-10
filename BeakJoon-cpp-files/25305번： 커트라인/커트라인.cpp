#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int N;
int k;
int x[1000];

cin >> N >> k;
for(int i=0; i<N; i++){
    cin >> x[i];
    }

    sort (x, x+N);
    cout << x[N-k];
}
