/*http://ascode.org/problem.php?id=1386*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
int testcase;
int stair;

cin >> testcase;

while(testcase--){
cin >> stair;

for(int i=1; i<stair+1; i++){
    for(int j=i; j>0; j--){
        cout << "###";
    }
    cout << '\n';
}
cout << '\n';
}
}