/*http://ascode.org/problem.php?id=1018*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int price;
cin >> price;
cout << price/500 <<"\n";
price%=500;
cout << price/100 <<"\n";
price%=100;
cout << price/10 <<"\n";
}