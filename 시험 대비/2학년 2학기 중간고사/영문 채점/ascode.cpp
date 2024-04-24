/*http://ascode.org/problem.php?id=1425*/
#include <iostream>
#include <string>
using namespace std;
int p, n;
string word;//단어가 들어감
string dot = { '.' };
string word_word[15];//단어의 개수
int word_score[15];//단어 점수

/*
1. 테스트케이스 별로 주어지는 가점 단어(영어 소문자로만 구성)들이 문장 중에
 어디라도 나타나면 해당 단어에 주어진 점수를 더한다.(대소문자 구별)
2. 이상의 경우를 제외한 모든 정상적인 단어(영어 소문자로만 이루어진 단어)에 대해서는
 길이의 반(나머지가 나올 경우에는 버림)만큼 점수를 더해 주되,
 단어에 소문자 이외의 문자가 포함되어 있는 경우에는 2점씩 감점한다.
*/

int sameword(string word) {//채점 단어가 있는지 확인함
    for (int i = 0; i = p; i++) {
        if (word == word_word[i]) {
            return word_score[i];
        }
    }
    return 0;
}

int alpha(string word) {//소문자인지, 아닌지 구분함  a <= word <= z
    int len = word.size();
    for (int i = 0; i < len; i++) {
        if (word[i] < 'a' || word[i] > 'z') {
            return 100;
        }
    }
    return len / 2;
}

int main() {

    cin >> p >> n;//단어 수, 문장 수

    for (int i = 0; i < p; i++) {
        cin >> word_word[i] >> word_score[i];//채점하는 단어와 점수
    }

    while (n--) {
        int score = 0;
        while (word != dot) {
            cin >> word;

            if (sameword(word) != 0) {
                score += sameword(word);//채점단어인 경우 점수 더해줌
            }
            else {//아닌 경우면 소문자인지 확인
                if (alpha(word) == 100) {
                    score -= 2;
                }
                else {
                score += alpha(word);
                }
            }
        }
        if (score == 100) {
            cout << "Perfect!\n";
        }
        else if (score > 60) {
            cout << score << '\n';
        }
        else {
            cout << "Fail!\n";
        }

    }
}