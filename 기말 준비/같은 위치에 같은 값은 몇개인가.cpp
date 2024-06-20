/*http://ascode.org/problem.php?id=문제번호*/
#include <iostream>
#include <algorithm>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
FASTOUT
int n;
int num;

while(1){
int a[100] = {0, };
cin >> n;
if(n==0)return 0;

for(int i=0; i<n; i++){
    cin >> num;
    a[i] = num;
}
    sort(a, a+n);

    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i] == a[n-i-1]){
            //cout << "[" << a[i] << "]";
            cnt++;
        }
    }

    cout << cnt <<  '\n';
}
}