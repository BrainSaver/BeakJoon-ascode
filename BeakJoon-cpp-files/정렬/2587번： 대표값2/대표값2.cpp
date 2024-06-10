#include <iostream>
#include <algorithm>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int num[5];
int total = 0;
for(int i=0; i<5; i++){
    cin >> num[i];
    total+=num[i];
}
sort(num, num + 5);
cout << total/5 << '\n';
cout << num[2] << '\n';
}