/*http://ascode.org/problem.php?id=1348*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

const int LIMIT=5000001;
char a[LIMIT]={1, 1, 0}; // 3번째부터 모두 0으로 초기화
void prime_init(){
    int i, j;
    for(i = 2; i < LIMIT; i++){
        if(a[i] == 0){ // 아직 체크되지 않은 경우
            for(j = i + i; j < LIMIT; j = j + i){
            // N까지 각 배수를 소수가 아닌 것으로 체크
            a[ j ] = 1;
            }
        }
    }
}

int main() {
FASTOUT
prime_init();
int testcase;
int n1, n2;
cin >> testcase;

while(testcase--){
    int cnt = 1;
    cin >> n1 >> n2;
    if(n1 > n2){
        swap(n1, n2);
    }
    for(int i=n1; i<=n2-12; i++){
        if(a[i]+a[i+6]+a[i+12] == 0){
            cout << cnt++ << ": " <<  i << "-" << i+6 << "-" << i+12 << '\n';
        }
    }
    if(cnt==1){
        cout << "No Sexy Prime Triplets!\n";
    }
}

}