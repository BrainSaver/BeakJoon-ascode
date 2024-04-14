/*http://ascode.org/problem.php?id=1228*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase=0; 
int n, m;
    cin >> testcase;
    for(int i=0; i<testcase; i++){
    cin >> n >> m;
    long long sum=(long long)((n+m)*(m-n+1))/2;
    cout << sum << "\n";
    }

    

}