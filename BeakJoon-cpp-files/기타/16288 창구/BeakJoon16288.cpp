#include <iostream>
using namespace std;

int main() {
    int N, k;
    int line[100] = { 0, };
    int in;
    bool on;
    bool YesOrNo = true;
    cin >> N >> k; //N과 k를 받음
    for(int i=0; i<N; i++){//입력을 받음
        cin >> in;
        on = false;
    for(int i=0; i<k; i++){//k방을 하나씩 확인해서 line[k] <in 이면 line에 값을 넣음
        if( line[i] < in ){
            line[i] = in;
            on = true;//가능하면 on = 1;
            break;
        }
    }
    if(on == false){ //불가능하면 on은 그대로 0
        YesOrNo = false;
    }
    }


    if(YesOrNo){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}