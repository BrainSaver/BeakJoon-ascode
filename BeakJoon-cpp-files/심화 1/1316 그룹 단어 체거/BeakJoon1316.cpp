#include <iostream>
#pragma warning(disable : 4996)
using namespace std;



    int dis(string word){
        int alpha[26]={0};

        if(word.size()==1){//단어 길이가 1이면 그룹단어
            return 0;
        }
        else{
            for(int a=0; a<word.size(); a++){
                if(alpha[word[a]-'a']==0){
                    alpha[word[a]-'a']=1;
                    while(word[a]==word[a+1]){
                        a++;
                    }
                }
                else{
                    return 1;
                }
            }
        }

        return 0;
    }


int main() {
ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);

    int testcase=0;
    string word[101];
    cin >> testcase;//testcase 입력받기

    int num=testcase;
    for(int a=0; a<testcase; a++){
        cin >> word[a];
        num-=dis(word[a]);
    }
        cout << num;
}