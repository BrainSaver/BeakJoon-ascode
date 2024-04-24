/*http://ascode.org/problem.php?id=1283*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
const int income[7] = {27000, 27000, 27000, 27000, 27000, 54000, 72000};

int HowLong(int price){
    int day = 0;//걸린 일수
    int day_money_count=500;//일주일마다 오르는 돈;
    while(price > 0){
        price-=income[day%7];
        day++;
    }
    return day;
}

int main() {
FASTOUT
int testcase;
int price;
cin >> testcase;

while(testcase--){
cin >> price;
cout << HowLong(price) <<'\n';
}
}