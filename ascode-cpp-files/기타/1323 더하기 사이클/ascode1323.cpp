/*http://ascode.org/problem.php?id=1323*/
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int testcase;
cin >> testcase;
for(int i=0; i<testcase; i++){
int N, a, b; 
int count=0;
cin >> N;
int NC = N;

while(1){//55 들어가면
a = N/10; // 5
b = N%10; // 5
if(a+b>=10){
N = b*10 + (a+b)%10; 
}
else{
N = b*10 + (a+b);
}
count++;
if(N==NC){
    break;
}
}
cout << "#" << i+1 <<": " <<count <<"\n";

}

}