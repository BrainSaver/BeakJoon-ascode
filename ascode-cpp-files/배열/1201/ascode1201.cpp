/*http://ascode.org/problem.php?id=1201*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int t=0;
cin >> t;
for(int i=0; i<t; i++){
    int price=0;
    int day=1;
    cin >> price;
    while(price > day*9500*6){
        day++;
    }
    cout << day <<"\n";
}
}