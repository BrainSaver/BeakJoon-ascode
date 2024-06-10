#include <iostream>
#include <stack>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
stack <int> s;
int testcase;
int num;

cin >> testcase;

while(testcase--){
cin >> num;

switch(num){
    case 0:
    s.pop();
    break;

    default:
    s.push(num);
    break;
}
}

int total=0;
while(!s.empty()){
    total += s.top();
    s.pop();
}
cout << total << "\n";
}