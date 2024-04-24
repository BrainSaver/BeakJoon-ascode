/*http://ascode.org/problem.php?id=1384*/
#include <iostream>
#include <string>
using namespace std;

void isword(string word){
    int length = word.length();
    if(length%2 == 0){//짝수일 때
    cout << word[0] << word[length-1] << '\n';
    }
    else if(length%2 == 1){ // 홀수일 때
    cout << word[0] << word[(length-1)/2] << word[length-1] << '\n';
    }
}

int main() {
int testcase;
cin >> testcase;

while(testcase--){
    string word;
    cin >> word;
    isword(word);
}
}