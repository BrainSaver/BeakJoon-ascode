/*http://ascode.org/problem.php?id=1285*/
#include <iostream>
#include <cmath>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

const int LIMIT=10001;
bool b[LIMIT]={1, 1, 0}; // 3번째부터 모두 0으로 초기화
void prime_init(){
int sqrtlimit = (int)sqrt((double)LIMIT);
for(int i = 2; i <= sqrtlimit; i++){
if(!b[i]){ // 아직 체크되지 않은 경우
for(int j = i * i ; j < LIMIT; j = j + i){
// i * i 이후의 모든 배수를 소수가 아닌 것으로 체크
b[ j ] = 1;
}
}
}
}


int main() {
FASTOUT
prime_init();
int m, n;
while(1){
    cin >> m >> n;
    if(m>n){
       int temp=m;
       m=n;
       n=temp;
    }

    if(m==0&&n==0){
        break;
    }

    int count = 0;
    for(int i=m; i<=n; i++){
        if( !b[i] and !b[i+2] and i+2<=n ){
            cout << ++count << ":(" << i <<','<<i+2<<")\n";
        }
    }
    if(count == 0){
        cout << "No Twin Primes!\n";
    }



    }
    }