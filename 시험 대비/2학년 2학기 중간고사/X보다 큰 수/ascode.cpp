/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int N;
int A[10000];
cin >> N;

for(int i=0; i<N; i++){
    cin >> A[i];
}
    int X;
    cin >> X;
    for(int i=0; i<N; i++){
        if(A[i]>X){
            cout << A[i] << " ";
        }
    }
}