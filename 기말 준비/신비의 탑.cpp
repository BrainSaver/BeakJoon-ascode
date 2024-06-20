/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
int n;
cin >> n;

for(int i=0; i<n; i++){
    for(int k=0; k<i; k++){
        cout << ' ';
    }
    for(int j=(n-i)*2-1; j>0; j--){
        cout << "@";
    }
    cout << '\n';
}

for(int i=0; i<n*2-1; i++){
    for(int j=0; j<n*2-1; j++){
        cout << '@';
    }
    cout << '\n';
}

}
