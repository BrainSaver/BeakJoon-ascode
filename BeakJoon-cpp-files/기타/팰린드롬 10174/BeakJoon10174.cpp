/*https://www.acmicpc.net/problem/10174  */
#include <iostream>
#include <string>
using namespace std;

bool dis(string word) {
    int len = word.size();


    for (int i = 0; i < len; i++) { //대문자를 소문자로 만들기
        if ('A' <= word[i] && word[i] <= 'Z') {
            word[i] += 32;
        }
    }



    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - 1 - i]) {
            return false;
        }
    }
    return true;
}


int main() {
    int testcase;
    string word;
    cin >> testcase;
    cin.ignore();

    while (testcase--) {
        
        getline(cin, word);
        //cout << word << endl;

        if (dis(word)) {
                    cout << "Yes\n";
        }
        else {
                     cout << "No\n";
        }

    }
}
