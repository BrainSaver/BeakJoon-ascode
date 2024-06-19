/*http://ascode.org/problem.php?id=1264*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
int testcase;
cin >> testcase;
while(testcase--){
    string word[2];
    int wordnum[2][26] = {0, }; //영단어의 개수 카운트
    //단어 2개 받아옴, 소문자만
    cin >> word[0] >> word[1];

    int len = word[0].size();

    //첫번째 단어의 알파벳 수 계산
    for(int i=0; i<len; i++){
        wordnum[0][word[0][i]-'a']++;
    }

    len = word[1].size();
    //두번째 단어의 알파벳 수 계산
    for(int i=0; i<len; i++){
        wordnum[1][word[1][i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(wordnum[0][i]!=0 && wordnum[1][i]!=0){
            if(wordnum[0][i]>wordnum[1][i]){
            for(int j=0; j<wordnum[1][i]; j++){
            cout << (char)(i+'a');
            }
            }
            else{
            for(int j=0; j<wordnum[0][i]; j++){
            cout << (char)(i+'a');
            }
            }
        }
    }
    cout << '\n';
}
}