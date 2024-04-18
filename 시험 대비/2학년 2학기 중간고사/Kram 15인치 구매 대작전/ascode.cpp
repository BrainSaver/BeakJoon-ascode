/*http://ascode.org/problem.php?id=1204*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
const int income[7] = { 40000, 40000, 40000, 40000, 40000, 80000, 80000 };

int Buytv(int price) {
    int day = 0;

    while (price > 0) {
        for (int i = 0; i < 7; i++) {
        price -= income[i];
        day++;
        if (price <= 0) {
            break;
        }
        }
    }
    return day;
}

int main() {
    FASTOUT
    int testcase;
    cin >> testcase;
       
    int day = 0;
    int price;
    while (testcase--) {
        cin >> price;
        cout << Buytv(price) << '\n';
    }

}