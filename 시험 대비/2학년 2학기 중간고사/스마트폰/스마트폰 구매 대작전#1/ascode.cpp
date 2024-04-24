#include <iostream>
using namespace std;

int howlong(int price) {
    int day = 0;
    int income = 63000;

    while (price > 0) {
        price -= income;
        day++;
        if (day % 7 == 0) {
            income += 1400;
        }
    }
    return day;
}

int main() {
    int testcase;
    int price;
    cin >> testcase;
    while (testcase--) {
        cin >> price;
        cout << howlong(price) << '\n' ;
    }
}