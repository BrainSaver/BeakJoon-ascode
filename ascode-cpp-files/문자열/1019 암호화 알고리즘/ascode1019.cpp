/*http://ascode.org/problem.php?id=1019*/
#include <iostream>
#include <string>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
cin >> testcase;

while(testcase--){
    string word;
    cin >> word;
    int len = word.size();
    for(int i=0; i< len; i++){
        if(word[i]=='Z'){
            cout << "A";
        }
        else{
            cout << (char)(word[i]+1);
        }
    }
        cout <<"\n";
}
}