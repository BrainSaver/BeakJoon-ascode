/*https://www.acmicpc.net/problem/5073  */
#include <iostream>
#define FASTOUT ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma warning(disable : 4996)
using namespace std;

int main() {
FASTOUT
int a=1, b=1, c=1;
while(cin >> a >> b >> c){
if(a==0 && b==0 && c==0){
    break;
}
else if(a>=b+c || b>=a+c || c>=a+b){
    cout << "Invalid\n";
}
else if(a==b && b==c && c==a){
    cout << "Equilateral\n";
}
else if(a==b || b==c || c==a){
    cout << "Isosceles\n";
}
else{
    cout <<"Scalene\n";
}
}
}