/*http://ascode.org/problem.php?id=1006*/
#include <iostream>
#include <string>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

void howmuch(string word){
int alpha[26]={0, };
int len=word.size();

for(int i=0; i<len; i++){
    alpha[word[i]-'a']++;
}

for(int i=0; i<26; i++){
    if(alpha[i]!=0){
        cout << (char)(i+'a') << ":" << alpha[i] <<"\n";
    }
}

cout << "\n";
}


int main() {
FASTOUT
int testcase;
cin >> testcase;

for(int i=0; i<testcase; i++){
    string word;
    cin >> word;
    howmuch(word);
}


}