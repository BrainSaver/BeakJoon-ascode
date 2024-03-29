#include <iostream>
#pragma warning(disable : 4996)
using namespace std;
/*
그룹 단어 체커

그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면,
 ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만,
 aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
*/

int main() {
ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
    int testcase=0;
    string word[100];
    cin >> testcase;//testcase 입력받기
    
    for(int a=0; a<testcase; a++){//단어 입력받기
    cin >> word[a];
    }
    int alpha[26]={0};
for(int a=0; a<testcase; a++){//입력받은 단어 수만큼 검사
    for(int b=0; b<26; b++){//알파벳 수만큼 반복
    while(word[a][b]!='a'+b){
        alpha[b]++;
        b++;
    }
    }
}

}