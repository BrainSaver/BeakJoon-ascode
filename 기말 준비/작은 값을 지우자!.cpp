/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
int n;
int input;
cin >> testcase;

while(testcase--){
    int a[101] = {0, };
    int cnt = 0;

    cin >> n;
    if(n==1){
        cout << "YES\n";
        return 0;
    }

    for(int i=0; i<n; i++){
        cin >> input;
        a[input]=1;
    }

    //0이나 1 차이가 나면 지움
    bool looop = true;

    while(looop){
        looop = false;
    for(int i=0; i<101; i++){
        //차이가 1인 경우 작은 값을 제거
        if(a[i]==1 && a[i-1]==1){
            a[i-1]--;
            looop = true;
        }
        //차이가 0인 경우
        if(a[i]>1){
            a[i] = 1;
            looop = true;
        }
    }
    }
    
    for(int i=0; i<101; i++){
        cnt+= a[i];
    }

    if(cnt == 1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

}