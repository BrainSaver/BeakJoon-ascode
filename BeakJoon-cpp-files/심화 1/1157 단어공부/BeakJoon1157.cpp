#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    string word;
    cin >> word;
    int wordnum[26]={0, };
    int max=0;//가장 많이 있는 알파벳

    //알파벳의 개수 카운트
    for(int a=0; a<word.size(); a++){
    if(word[a]>=97){
        wordnum[word[a]-'a']++;//소문자인 경우
    }
    else{
        wordnum[word[a]-'A']++;//대문자인 경우
    }
    }
//알파벳 수가 wordnum에 저장됨
    int maxnum=0;//제일 큰 수 찾기
    for(int a=0; a<26; a++){
        if(wordnum[a]>maxnum){//알파벳 수가 가장 많은 것을 maxnum에 저장
        maxnum=wordnum[a];
        max=a;
        }
    }
    
    int maxcount=0;//많은 알파벳 개수 세기
    for(int a=0; a<26; a++){
        if(wordnum[a] == maxnum){//가장 많은 알파벳이 2개 이상인 경우를 알아내기 위함
            maxcount++;
        }
    }

    if(maxcount>1){//가장 많은 알파벳이 2개 이상이라면
        cout << "?\n";
    }
    else{
        cout << (char)('A'+max) << "\n";//1개라면
    }

    //알파벳이 잘 세어졌는지 확인
    /*
    for(int a=0; a<26; a++){
        cout << wordnum[a] << "\n";
    }
    */



    //가장 많이 있는 알파벳이 1개라면 알파벳을, 아니라면 ?를 출력

}