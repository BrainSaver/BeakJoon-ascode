/*https://www.acmicpc.net/problem/2577 

 */
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int num[10] ={0, }; //0~9
int A, B, C, total;
cin >> A >> B >> C;
total = A*B*C;
//cout << total << "\n";

while(total!=0){
num[total%10]++;
total/=10;
}

for(int i=0; i<10; i++){
    cout << num[i] <<"\n";
}

}