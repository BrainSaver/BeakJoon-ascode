/*http://ascode.org/problem.php?id=1236*/
#include <iostream>
using namespace std;

int main() {
int testcase;
int num;
int day;
cin >> testcase;

while(testcase--){
    day = 0;
    cin >> num;
while(num!=1){
    if(num%2 == 1){//홀수라면
    num = num*3+1;
    }
    else if(num%2 == 0){//짝수라면
    num = num/2;
    }
    day++;
}
cout << day << '\n';
}

}