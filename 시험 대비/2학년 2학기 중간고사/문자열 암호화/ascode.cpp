/*http://ascode.org/problem.php?id=1343*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTOUT

    int testcase;
    cin >> testcase;

    while(testcase--){
    string word;
    string one;
    string two;
        cin >> word;

        int len = word.size();//단어 길이
        for(int i=1; i<len+1; i++){
            if(i%2 == 1){//짝수 단어
            one += word[i-1];
            }
            if(i%2 == 0){//홀수 단어
            two += word[i-1];
            }
        }
        cout << one << two << '\n';
    }
    }