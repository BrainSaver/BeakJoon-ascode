#include <iostream>

using namespace std;

int coinChange(int amount) {
    int dp[3][amount+1];
    dp[0][0] = 0;
    for(int i=1; i<=amount; i++) {
        dp[0][i] = i;
    }
    for(int i=0; i<3; i++) {
        for(int j=500; j<=amount; j+=500) {
            dp[i][j] = min(dp[i][j], dp[i][j-500]+1);
        }
        for(int j=100; j<=amount; j+=100) {
            dp[i][j] = min(dp[i][j], dp[i][j-100]+1);
        }
        for(int j=50; j<=amount; j+=50) {
            dp[i][j] = min(dp[i][j], dp[i][j-50]+1);
        }
    }
    return dp[2][amount];
}

int main() {
    int amount;
    cin >> amount;
    cout << coinChange(amount) << endl;
    return 0;
}