#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int howlong(int price){
    int day=0;
    int income = 5000;

    while(price > 0){
        price-=income;
        day++;
        if(day%10==0){
            income+=200;
        }
    }

    return day;
}

int main() {
FASTOUT
int testcase=0, price;
cin >> testcase;
for(int i=0; i<testcase; i++){
    cin >> price;
    cout << howlong(price) <<"\n";
}
}