#include <iostream>
using namespace std;
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    FASTOUT
int num[10001] = {0, };
    int testcase;
    int numm;
    cin >> testcase;
    
    for(int i=0; i<testcase; i++){
        cin >> numm;
        num[numm]++;
    }

    for(int i=1; i<10001; i++){
        if(num[i] != 0){
            for(int j=0; j<num[i]; j++){
            cout << i << '\n';
            }
        }
    }
}