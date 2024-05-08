#include<iostream>
using namespace std;

int totalday(int price) {
    int day = 0;
    int monday = 5;
    int tuesday = 5;
    int wednesday = 5;
    int thirsday = 5;
    int friday = 5;

    int saturday = 8;
    int sunday = 8;
    int weekmoney = 8000; // 초기 시급 설정
    int weekendmoney = 10000;

    while (price > 0) {
        if (day % 7 == 0) {
            price -= monday * weekmoney;
        }
        if (day % 7 == 1) {
            price -= tuesday * weekmoney;
        }
        if (day % 7 == 2) {
            price -= wednesday * weekmoney;
        }
        if (day % 7 == 3) { 
            price -= thirsday * weekmoney;
        }
        if (day % 7 == 4) { 
            price -= friday * weekmoney;
        }
        if (day % 7 == 5) { // 토요일
            price -= saturday * weekendmoney;
        }
        if (day % 7 == 6) { // 일요일
            price -= sunday * weekendmoney;
        }
        day++;
    }

    return day;
}

int main() {
    int testcase;
    cin >> testcase;
    for (int i = 0; i < testcase; i++) {
        int price;
        cin >> price;

        cout << totalday(price) << endl;
    }
    return 0;
}