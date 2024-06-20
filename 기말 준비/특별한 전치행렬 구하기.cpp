/*http://ascode.org/problem.php?id=1215*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
int testcase;
cin >> testcase;

while(testcase--){
    int arr[10][10];
    int a, b;
    cin >> a >> b;

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> arr[i][j];
        }
    }

    if(a != b){
    for(int i=0; i<b; i++){
        for(int j=0; j<a; j++){
            cout << arr[j][i] << ' ';
        }
        cout << '\n';
    }
    }
    else{
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout << arr[i][j] << ' ';
        }
        cout << "\n";
    }
    }
    
}
}

/*
    00 01 02
    10 11 12

    00 10
    01 11
    02 12
    */