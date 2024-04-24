/*http://ascode.org/problem.php?id=1191*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


void m5(int amount) {
    cout << amount / 5000 << ' ';
    amount%=5000;
    cout << amount / 1000 << '\n';
}

void M1(int amount) {
    cout << amount / 10000 << ' ';
    m5(amount % 10000);
}

void M5(long long amount) {
    cout << amount / 50000 << ' ';
    M1(amount % 50000);
}

int main() {
    FASTOUT
        long long amount;
    cin >> amount;
    M5(amount);
}