/*http://ascode.org/problem.php?id=1385*/
#include <iostream>
#include <string>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase, dup, length;
string word;

cin >> testcase;
while(testcase--){
    cin >> dup >> word;
    length = word.size();
    for(int j=0; j<length; j++){
        for(int i=0; i<dup; i++){
            cout << word[j];
        }
    }
    cout << '\n';
}
}