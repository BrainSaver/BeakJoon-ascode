/*http://ascode.org/problem.php?id=1234
소수란 1과 자기 자신을 제외한 그 어떤 수로도 나누어 떨어지지 않는 수를 말한다.
예를 들어 2, 3, 5, 7은 1과 자기 자신을 제외한 어떤 수로도 나누어 떨어지지 않으므로 소수지만 4는 1과 자기 자신 이외에도 2로 나누어 떨어지기 때문에 소수가 아니다.
두 수를 a , b 를 입력받았을 때 a 이상 b 이하의 수 중에서 소수가 몇 개인지 찾는 프로그램을 작성하라.
*/


#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTOUT

    int N[10000]; //1이 들어가 있으면 소수가 아님

    for(int i=1; i<10000+1; i++){
        if( i%2==0 || i%3==0 || i%5==0 || i%7==0){
            N[i]=0;
        }
        else{
            N[i]=1;
        }
    }

    N[2]=1;N[3]=1;N[5]=1;N[7]=1;

    int testcase;

    cin >> testcase;

    while(testcase--){
    int N1=0, N2=0;
    int total=0;
    cin >> N1 >> N2;

    for(int i=N1; i<N2; i++){
        if(N[i]==1){
            total++;
        }
    }

    cout << total << "\n";
    }

    return 0;
    }
