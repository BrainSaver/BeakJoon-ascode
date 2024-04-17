/*http://ascode.org/problem.php?id=1013
*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
cin >> testcase;

while(testcase--){
    string num;
    cin >> num;
    cout << num[2] << num[3] <<"\n";
    }
}