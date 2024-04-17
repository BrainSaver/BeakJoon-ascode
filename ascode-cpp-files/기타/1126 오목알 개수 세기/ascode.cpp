/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int num;
int black=0;
int white=0;
for(int i=0; i<361; i++){
    cin >> num;
    if(num==1){
        black++;
    }
    else if(num==2){
        white++;
    }
}
cout << black << " " << white;
}