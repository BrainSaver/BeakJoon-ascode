/*http://ascode.org/problem.php?id=1236

*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
int N;

cin >> testcase;
    for(int i=0; i<testcase; i++){
        int day=0;
        cin >> N;
        while(N!=1){
        if(N%2==1){//홀수라면
            N = N*3+1;
        }
        else if(N%2==0){//짝수라면
            N = N/2;
        }
        day++;
        }
        cout << day << "\n";
    }

}